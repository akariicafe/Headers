@class UIColor, NSString, MTStylingProvidingSolidColorView, WFWidgetConfigurationRequest, MTVisualStylingProvider, UIViewController;
@protocol WFWidgetConfigurationContainerViewControllerProtocolDelegate;

@interface WFWidgetConfigurationContainerViewController : UINavigationController <WFWidgetConfigurationContainerViewControllerProtocol>

@property (readonly, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (weak, nonatomic) id<WFWidgetConfigurationContainerViewControllerProtocolDelegate> containerDelegate;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
