@class NSString;
@protocol VSViewServiceRemoteViewControllerDelegate;

@interface VSViewServiceRemoteViewController : _UIRemoteViewController <VSViewServiceHostProtocol>

@property (weak, nonatomic) id<VSViewServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_presentViewController;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_dismissViewController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_request:(id)a0 didFinishWithResponse:(id)a1;
- (void)_request:(id)a0 didFailWithError:(id)a1;
- (void)_didChooseAdditionalProvidersForRequest:(id)a0;
- (void)_didCancelRequest:(id)a0;
- (void)_didChooseProviderWithIdentifier:(id)a0 vetoHandler:(id /* block */)a1;

@end
