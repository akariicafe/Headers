@class NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } bestKeyFrameTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestVideoTimeRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackRect;
@property (readonly, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (readonly, nonatomic) unsigned long long mediaAnalysisVersion;
@property (readonly, nonatomic) float blurrinessScore;
@property (readonly, nonatomic) float exposureScore;
@property (readonly, nonatomic) float autoplaySuggestionScore;
@property (readonly, nonatomic) float videoScore;
@property (readonly, nonatomic) float activityScore;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) short audioClassification;

+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)additionalPropertiesToFetchOnPrimaryObject;

- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
