@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration

@property (nonatomic) BOOL detectFacesInFullSizeInput;
@property (nonatomic) BOOL skipFaceLandmarkDetection;
@property (nonatomic) BOOL skipFoodAndDrinkDetection;
@property (nonatomic) BOOL skipSkinToneClassification;
@property (nonatomic) BOOL includesInvalidContent;

+ (id)configuration;

- (id)initWithInferenceType:(int)a0;

@end
