@class NSData, NSDate;

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet

@property (class, readonly, nonatomic) float defaultAudioScore;

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } bestKeyFrameTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } bestVideoTimeRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackRect;
@property (readonly, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (readonly, nonatomic) unsigned long long mediaAnalysisVersion;
@property (readonly, nonatomic) float blurrinessScore;
@property (readonly, nonatomic) float exposureScore;
@property (readonly, nonatomic) float wallpaperScore;
@property (readonly, nonatomic) float autoplaySuggestionScore;
@property (readonly, nonatomic) float videoScore;
@property (readonly, nonatomic) float activityScore;
@property (readonly, nonatomic) float audioScore;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) short audioClassification;
@property (readonly, nonatomic) short probableRotationDirection;
@property (readonly, nonatomic) float probableRotationDirectionConfidence;
@property (readonly, nonatomic) NSData *colorNormalizationData;
@property (readonly, nonatomic) short screenTimeDeviceImageSensitivity;
@property (readonly, nonatomic) unsigned short syndicationProcessingValue;
@property (readonly, nonatomic) unsigned long long syndicationProcessingVersion;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathToPrimaryObject;
+ (id)additionalPropertiesToFetchOnPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;
- (void)initWithDefaultValues;

@end
