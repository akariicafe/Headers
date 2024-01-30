@class CSMagSafeAccessory, CSMagSafeAccessoryView;

@interface CSMagSafeAccessoryViewController : CSCoverSheetViewControllerBase

@property (retain, nonatomic) CSMagSafeAccessory *accessory;
@property (readonly, nonatomic) CSMagSafeAccessoryView *accessoryView;
@property (readonly, nonatomic) BOOL isStatic;
@property (readonly, nonatomic) BOOL hasChargingAnimation;
@property (readonly, nonatomic) BOOL showingChargingAnimation;
@property (readonly, nonatomic) double chargingAnimationDuration;
@property (readonly, nonatomic) double animationDurationBeforeDismissal;
@property (readonly, nonatomic) BOOL isAnimatingPresentation;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (void)transitionChargingViewVisible:(BOOL)a0 chargingInfo:(id)a1;

@end
