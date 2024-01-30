@class NSString, WFWidgetConfigurationRemoteViewController, WFWidgetConfigurationContainerView;

@interface WFWidgetConfigurationView : UIView <UIGestureRecognizerDelegate> {
    struct CGSize { double width; double height; } _preferredConfigurationCardViewSize;
}

@property (retain, nonatomic) WFWidgetConfigurationContainerView *containerView;
@property (retain, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overridingCardViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)requestDismissal;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredCardSize:(struct CGSize { double x0; double x1; })a1;

@end
