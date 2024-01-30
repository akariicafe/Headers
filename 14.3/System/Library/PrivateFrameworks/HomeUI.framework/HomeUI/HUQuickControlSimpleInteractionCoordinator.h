@class NSString, UIViewController, UIView;
@protocol HUQuickControlInteractiveViewController, HUQuickControlInteractiveView;

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate> {
    id _value;
}

@property (nonatomic) BOOL hasStartedSecondTouch;
@property (nonatomic) BOOL shouldDismissAutomatically;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *controlView;
@property (readonly, nonatomic) UIViewController<HUQuickControlInteractiveViewController> *contraptionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isUserInteractionEnabled;
- (id)value;
- (void)setValue:(id)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (BOOL)isUserInteractionActive;
- (void)controlView:(id)a0 interactionStateDidChange:(BOOL)a1 forFirstTouch:(BOOL)a2;
- (void)controlView:(id)a0 valueDidChange:(id)a1;
- (id)initWithControlView:(id)a0 delegate:(id)a1;
- (void)_setValue:(id)a0 notifyDelegate:(BOOL)a1 updateControlView:(BOOL)a2;
- (void)_requestDismissalIfNecessary;
- (id)initWithContraptionViewController:(id)a0 delegate:(id)a1;

@end
