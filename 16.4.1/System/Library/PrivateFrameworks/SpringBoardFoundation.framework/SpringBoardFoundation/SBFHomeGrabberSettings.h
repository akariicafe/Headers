@class SBFFluidBehaviorSettings, SBFAnimationSettings;

@interface SBFHomeGrabberSettings : PTSettings

@property (nonatomic) double coverSheetHomeAffordanceCursorTopEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorBottomEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorLeftEdgeInset;
@property (nonatomic) double coverSheetHomeAffordanceCursorRightEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerTopEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerBottomEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerLeftEdgeInset;
@property (nonatomic) double coverSheetSuppressAnimationForPointerRightEdgeInset;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long initializationStyle;
@property (nonatomic) BOOL removeViewOnHide;
@property (nonatomic) long long edgeProtectOverride;
@property (nonatomic) long long autoHideOverride;
@property (nonatomic) double autoHideTime;
@property (nonatomic) double autoHideTimeOnAppRequest;
@property (nonatomic) BOOL resetAutoHideTimeOnRotation;
@property (nonatomic) double delayForUnhideOnTouch;
@property (nonatomic) double delayForUnhideOnAppRequest;
@property (nonatomic) double bounceHitTestOutsetTop;
@property (nonatomic) double bounceHitTestOutsetSides;
@property (retain, nonatomic) SBFAnimationSettings *hideAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *unhideAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *hideForHomeGestureOwnershipAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *unhideForHomeGestureOwnershipAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *thinToProminentAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *prominentToThinAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *forcedProminentToThinAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *lumaResponseAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *initialLumaResponseAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeOutAnimationSettings;
@property (retain, nonatomic) SBFAnimationSettings *rotationFadeInAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *edgeProtectAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })coverSheetHomeAffordanceCursorEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })coverSheetSuppressAnimationForPointerInsets;
- (void).cxx_destruct;

@end
