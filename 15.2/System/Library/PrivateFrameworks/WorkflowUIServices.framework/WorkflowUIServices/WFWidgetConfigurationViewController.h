@class WFWidgetConfigurationHostCardView, NSString, WFWidgetConfigurationRemoteViewController, _UIRemoteViewController, WFWidgetConfigurationRequest, NSExtension, WFWidgetConfigurationView;
@protocol WFWidgetConfigurationViewControllerDelegate, NSCopying;

@interface WFWidgetConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate>

@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, weak, nonatomic) WFWidgetConfigurationHostCardView *cardView;
@property (readonly, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (weak, nonatomic) id<WFWidgetConfigurationViewControllerDelegate> delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (id)initWithRequest:(id)a0;
- (void)viewDidLoad;
- (id)initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)finishWithCurrentConfiguration;
- (void)widgetConfigurationRemoteViewController:(id)a0 didReceiveConfiguredIntent:(id)a1;
- (void)widgetConfigurationCardViewDidRequestToClose:(id)a0;
- (void)showErrorMessage;
- (void)loadWidgetConfigurationRemoteViewController;
- (void)setRemoteViewController:(id)a0 extension:(id)a1 extensionRequest:(id)a2;
- (void)installRemoteViewController:(id)a0;

@end
