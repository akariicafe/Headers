@class NSNumber;

@interface BWLandmarksInferenceConfiguration : BWVisionInferenceConfiguration

@property (class, readonly, nonatomic) unsigned long long portraitMaximumNumberOfFaces;
@property (class, readonly, nonatomic, getter=isPortraitPrewarmingRequired) BOOL portraitPrewarmingRequired;

@property (nonatomic) BOOL refinesMouthLandmarks;
@property (nonatomic) BOOL refinesLeftEyeLandmarks;
@property (nonatomic) BOOL refinesRightEyeLandmarks;
@property (nonatomic) BOOL detectsBlinking;
@property (retain, nonatomic) NSNumber *cascadeStepCount;
@property (nonatomic) unsigned long long maximumNumberOfFaces;
@property (nonatomic) BOOL clampToLargestMaximumNumberOfFaces;
@property (nonatomic) BOOL alwaysExecuteForRedEyeReduction;
@property (nonatomic) BOOL detectLandmarksInFullSizeInput;
@property (nonatomic) unsigned long long constellationPointCount;
@property (nonatomic) BOOL considerISPRectsIfVisionFails;
@property (nonatomic) struct { unsigned short major; unsigned short minor; unsigned short patch; } landmarksInferenceVersion;

+ (void)initialize;
+ (id)configuration;

- (id)initWithInferenceType:(int)a0;
- (void)dealloc;

@end
