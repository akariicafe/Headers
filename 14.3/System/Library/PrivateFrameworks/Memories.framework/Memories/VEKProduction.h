@class NSDate, NSDictionary, NSObject, _TtC11AutoEditLib24PipelineExportController, PHAsset, _TtC11AutoEditLib18PipelineController, PHAssetCollection, VEKProductionExport, NSString, VEKResult, MiroPickList, NSSet, _TtC11AutoEditLib11MoodService, NSArray, VEKBlueprint, _TtC11AutoEditLib15PicklistService;
@protocol OS_dispatch_queue;

@interface VEKProduction : NSObject <PosterDataProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _TtC11AutoEditLib18PipelineController *pipelineController;
@property (retain, nonatomic) _TtC11AutoEditLib24PipelineExportController *pipelineExportController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pipelineQueue;
@property (retain, nonatomic) VEKProductionExport *productionExport;
@property (retain, nonatomic) VEKResult *lastResult;
@property (retain, nonatomic) _TtC11AutoEditLib11MoodService *moodService;
@property (nonatomic) BOOL memoryTypeDisablesCropping;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset;
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges;
@property (retain, nonatomic) NSArray *fetchedAssets;
@property (retain, nonatomic) MiroPickList *fullPicklist;
@property (nonatomic) BOOL persistedAtLeastOnce;
@property (retain, nonatomic) _TtC11AutoEditLib15PicklistService *fullPicklistService;
@property (nonatomic) double maxDuration;
@property (retain, nonatomic) NSString *requestedMood;
@property (retain, nonatomic) NSDate *memoryViewedDate;
@property (nonatomic) BOOL isPending;
@property (readonly, nonatomic) PHAssetCollection *collection;
@property (nonatomic) double requestedDuration;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) VEKBlueprint *blueprint;
@property (retain, nonatomic) NSSet *suggestions;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)persisted;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)persistMemory;
- (long long)pickedItemCount;
- (void)exportWithPresets:(id)a0 naturalSize:(struct CGSize { double x0; double x1; })a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)makePlayerItemWithNaturalSize:(struct CGSize { double x0; double x1; })a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)logCloudToLocalIdentifiersForCollection:(id)a0;
- (void)logAssetTypesForCollection:(id)a0 description:(id)a1;
- (void)makeProjectWithNaturalSize:(struct CGSize { double x0; double x1; })a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
