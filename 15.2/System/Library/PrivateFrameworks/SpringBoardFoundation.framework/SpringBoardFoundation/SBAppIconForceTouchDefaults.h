@interface SBAppIconForceTouchDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float animationDurationMultiplier;
@property (nonatomic) BOOL enableUIPreviewInteractionAnimations;
@property (nonatomic) float quickActionAnimationDuration;

- (void)_bindAndRegisterDefaults;

@end
