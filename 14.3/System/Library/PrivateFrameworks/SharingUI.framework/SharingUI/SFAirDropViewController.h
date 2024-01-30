@class NSString, _SFAirDropRemoteViewController, _UIRemoteViewController, NSExtension;
@protocol SFAirDropViewControllerDelegate;

@interface SFAirDropViewController : UIViewController <SFAirDropViewServiceHostProtocol, _UIRemoteViewControllerContaining> {
    _SFAirDropRemoteViewController *_childViewController;
    id _extensionRequest;
}

@property (retain, nonatomic) NSExtension *extension;
@property (weak, nonatomic) id<SFAirDropViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNoContentView:(BOOL)a0;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setExtensionRequest:(id)a0;
- (void)_setChildViewController:(id)a0;
- (void)viewDidLoad;

@end
