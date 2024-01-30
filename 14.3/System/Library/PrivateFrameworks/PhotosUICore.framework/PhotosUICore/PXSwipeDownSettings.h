@interface PXSwipeDownSettings : PXSettings

@property (nonatomic) double downGestureToleranceAngle;
@property (nonatomic) double upGestureToleranceAngle;
@property (nonatomic) long long horizontalMotionType;
@property (nonatomic) double horizontalResistanceDistance;
@property (nonatomic) long long downMotionType;
@property (nonatomic) double downResistanceDistance;
@property (nonatomic) long long upMotionType;
@property (nonatomic) double upResistanceDistance;
@property (nonatomic) double scaleDownFactor;
@property (nonatomic) double scaleDownDistance;
@property (nonatomic) BOOL rotationOnHorizontalMotion;
@property (nonatomic) double rotationHorizontalMotionFactor;
@property (nonatomic) double rotationHorizontalMotionHysteresisDistance;
@property (nonatomic) BOOL rotationOnVerticalMotion;
@property (nonatomic) double rotationVerticalMotionAngle;
@property (nonatomic) double rotationVerticalMotionResistanceDistance;
@property (nonatomic) double rotationMaximumAngle;
@property (nonatomic) double transitionDistance;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
