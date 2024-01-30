@class SBFFluidBehaviorSettings;

@interface SBHWidgetSettings : PTSettings

@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled;
@property (nonatomic) unsigned long long maximumWidgetsInAStack;
@property (nonatomic) BOOL stackAlwaysShowsBorder;
@property (nonatomic) BOOL stackAlwaysShowsPageControl;
@property (nonatomic) BOOL stackFlashesPageControlOnAppearance;
@property (nonatomic) BOOL showLabelsInTodayView;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toggleEditingOrPinnedAnimationSettings;
@property (nonatomic) double animatedInsertionJumpScale;
@property (nonatomic) double animatedInsertionImpactScale;
@property (nonatomic) double animatedInsertionImpactDelay;
@property (nonatomic) double animatedInsertionJumpDuration;
@property (nonatomic) double animatedInsertionJumpDampingRatio;
@property (nonatomic) double animatedInsertionSlamDuration;
@property (nonatomic) double animatedInsertionSlamDelay;
@property (nonatomic) double animatedInsertionSlamDampingRatio;
@property (nonatomic) double animatedInsertionScaleResetDuration;
@property (nonatomic) double animatedInsertionScaleResetDelay;
@property (nonatomic) double animatedInsertionScaleResetDampingRatio;
@property (nonatomic) double animatedInsertionPositionDuration;
@property (nonatomic) double animatedInsertionPositionDampingRatio;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dropInsertionAnimationSettings;
@property (nonatomic) double dropInsertionImpactScale;
@property (nonatomic) double dropInsertionImpactDelay;
@property (nonatomic) double dropInsertionSlamDuration;
@property (nonatomic) double dropInsertionSlamDelay;
@property (nonatomic) double dropInsertionSlamDampingRatio;
@property (nonatomic) double dropInsertionScaleResetDuration;
@property (nonatomic) double dropInsertionScaleResetDelay;
@property (nonatomic) double dropInsertionScaleResetDampingRatio;
@property (nonatomic) BOOL configurationBlursBackground;
@property (nonatomic) BOOL configurationUsesPercentVerticalMargin;
@property (nonatomic) double configurationPercentVerticalMargin;
@property (nonatomic) double configurationAbsoluteVerticalMargin;
@property (nonatomic) BOOL configurationScalesHomeScreenRelativeToCardPosition;
@property (nonatomic) double configurationHomeScreenScale;
@property (nonatomic) double configurationHomeScreenAlpha;
@property (nonatomic) BOOL configurationEqualizesMinCardToCameraDistance;
@property (nonatomic) double configurationPerspectiveCameraDistance;
@property (nonatomic) double configurationMinCardToCameraDistance;
@property (nonatomic) double configurationDarkeningTintAlpha;
@property (nonatomic) double configurationWidgetTintColorAlpha;
@property (nonatomic) BOOL configurationMaximizesCardHeight;
@property (nonatomic) BOOL configurationEnforcesMaxCardHeight;
@property (nonatomic) double configurationMaxCardHeight;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
