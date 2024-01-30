@protocol WFWidgetConfigurationRemoteViewControllerDelegate;

@interface WFWidgetConfigurationRemoteViewController : _UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol>

@property (weak, nonatomic) id<WFWidgetConfigurationRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)intentWasConfigured:(id)a0;
- (void)requestViewControllerDismissal;

@end
