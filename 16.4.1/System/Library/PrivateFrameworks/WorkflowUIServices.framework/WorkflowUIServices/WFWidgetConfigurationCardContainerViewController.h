@class WFWidgetConfigurationContainerView, WFWidgetConfigurationCardView, NSString, UIColor, WFWidgetConfigurationRequest, MTVisualStylingProvider, UIViewController;
@protocol WFWidgetConfigurationContainerViewControllerProtocolDelegate;

@interface WFWidgetConfigurationCardContainerViewController : UIViewController <WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationContainerViewDelegate, WFWidgetConfigurationContainerViewControllerProtocol>

@property (retain) WFWidgetConfigurationCardView *cardView;
@property (retain) WFWidgetConfigurationContainerView *containerView;
@property (weak, nonatomic) id<WFWidgetConfigurationContainerViewControllerProtocolDelegate> containerDelegate;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (nonatomic) unsigned long long widgetConfigurationStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } configurationCardViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider;

- (void)viewDidLoad;
- (void)updateUserInterfaceStyle;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)configurationView;
- (id)initWithRequest:(id)a0 contentViewController:(id)a1;
- (void)widgetConfigurationCardViewDidRequestToClose:(id)a0;
- (void)widgetConfigurationContainerViewUserInterfaceStyleDidChange:(id)a0;

@end
