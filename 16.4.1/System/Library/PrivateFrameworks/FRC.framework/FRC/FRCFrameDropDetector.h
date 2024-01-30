@class NSArray, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface FRCFrameDropDetector : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minDuration;
    NSArray *sortedTimingList;
    NSArray *sortedMetadataList;
    NSMutableArray *frameInternalPTSList;
    NSMutableArray *frameBurstyDropInfoList;
    NSMutableArray *insertionPointList;
    NSObject<OS_os_log> *_logger;
}

@property (nonatomic) BOOL debugPrint;
@property (nonatomic) BOOL gatingEnabled;
@property (nonatomic) BOOL singleDropRecoveryEnabled;
@property (readonly, nonatomic) long long retimingRecipe;
@property (readonly, nonatomic) unsigned long long numberOfInsertionPoints;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumDuration;
@property (readonly, nonatomic) unsigned long long gatingCause;

- (id)errorWithDescription:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)debugPrintFRCFrameMetadataInfo:(id)a0;
- (id)buildInsertionPointListFromInternalTimingList:(id)a0 bailOutCode:(long long *)a1;
- (id)calculateFrameDropInfoFromSortedMetadataList:(id)a0 sortedTimingList:(id)a1;
- (id)calculateFrameDurationFromSortedTimingList:(id)a0;
- (unsigned long long)countNumberOfFramesWithRecipeInMetadataList:(id)a0;
- (void)debugPrintFRCFRCFrameBurstyDropInfo:(id)a0;
- (void)debugPrintFRCFrameInternalTimingInfo:(id)a0;
- (void)debugPrintFRCFrameTimingInfo:(id)a0;
- (id)detectFrameDropsFromFrameMetadataList:(id)a0 frameTimingList:(id)a1;
- (id)detectFrameDropsFromFrameTimingList:(id)a0;
- (id)detectFrameDropsFromInternalTimingList:(id)a0;
- (void)detectLocationOfBurstyGapsFromBurstyDropList:(id)a0 frameInternalTimingList:(id)a1;
- (id)detectSingleFrameDropsFromFrameTimingList:(id)a0;
- (void)detectSingleFrameDropsFromInternalTimingList:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })droppingThreshold;
- (void)scaleNumberOfFramesToInsertFor2xSloMo:(id)a0;
- (id)selectFrameInsertionPointsFromTimingList:(id)a0 metadataList:(id)a1 sloMo:(BOOL)a2 withError:(id *)a3;
- (void)setPropertiesFromDefaults;
- (id)sortFrameMetadataListInDisplayOrderFromMetadataList:(id)a0;
- (id)sortFrameTimingListInDisplayOrderFromTimingList:(id)a0;

@end
