@interface CSCoverSheetFlyInSettings : PTSettings

@property (nonatomic) BOOL centerFollowsFinger;
@property (nonatomic) BOOL animateIconsOnPresentationToo;
@property (nonatomic) double iconsFlyInInteractiveResponseMin;
@property (nonatomic) double iconsFlyInInteractiveResponseMax;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMin;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMax;
@property (nonatomic) double iconsFlyInTension;
@property (nonatomic) double iconsFlyInFriction;
@property (nonatomic) double slomoRate;
@property (nonatomic) double baselineDistance;
@property (nonatomic) double effectMultiplier;
@property (nonatomic) double distanceExponent;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
