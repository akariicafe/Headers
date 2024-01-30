@class NSArray, NSDate;
@protocol MiroMetadataRangeMergeable;

@interface MiroAnalysisInfo : NSObject

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long performedAnalysisTypes;
@property (nonatomic) long long analysisVersion;
@property (retain, nonatomic) NSDate *performedAnalysisDate;
@property (nonatomic) double qualityScore;
@property (nonatomic) double junkScore;
@property (retain, nonatomic) NSArray<MiroMetadataRangeMergeable> *ranges;

+ (id)descriptionForAnalysisTypes:(unsigned long long)a0;
+ (id)analysisInfo;
+ (id)analysisInfoWithVPAnalysisInfo:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeWith:(id)a0;
- (id)description;

@end
