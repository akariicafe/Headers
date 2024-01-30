@class CSAccessoryView, CSAccessory;

@interface CSAccessoryViewController : CSCoverSheetViewControllerBase

@property (retain, nonatomic) CSAccessory *accessory;
@property (readonly, nonatomic) CSAccessoryView *accessoryView;
@property (readonly, nonatomic) BOOL isStatic;
@property (readonly, nonatomic) BOOL hasChargingAnimation;
@property (readonly, nonatomic) BOOL showingChargingAnimation;
@property (readonly, nonatomic) double chargingAnimationDuration;
@property (readonly, nonatomic) double animationDurationBeforeDismissal;
@property (readonly, nonatomic) BOOL isAnimatingPresentation;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (BOOL)handleEvent:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (void)transitionChargingViewVisible:(BOOL)a0 chargingInfo:(id)a1;

@end
