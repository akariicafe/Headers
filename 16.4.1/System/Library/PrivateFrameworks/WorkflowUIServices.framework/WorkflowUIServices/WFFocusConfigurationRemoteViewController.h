@class NSString, WFFocusConfigurationHostContext;
@protocol WFFocusConfigurationRemoteViewControllerDelegate;

@interface WFFocusConfigurationRemoteViewController : _UIRemoteViewController <WFFocusConfigurationServiceHostProtocol, WFFocusConfigurationHostContextDelegate>

@property (weak, nonatomic) id<WFFocusConfigurationRemoteViewControllerDelegate> delegate;
@property (retain, nonatomic) WFFocusConfigurationHostContext *serviceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)configurationUIStateDidUpdate:(id)a0;
- (void)didPressButtonWithIdentifier:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)focusConfigurationHostContext:(id)a0 configurationUIStateDidChange:(id)a1;
- (void)focusConfigurationHostContext:(id)a0 didPressButtonWithIdentifier:(id)a1 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)notifyDelegateWithConfigurationUIState:(id)a0;
- (void)notifyDelegateWithPressedButtonIdentifier:(id)a0 cellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
