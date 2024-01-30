@class VSOptional, NSMutableDictionary, VSViewControllerFactory, NSString, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *requestsByID;
@property (retain, nonatomic) VSOptional *currentRequest;
@property (retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController;
@property (nonatomic) BOOL hasRetriedOnce;
@property (nonatomic) BOOL hasRequestedPresentation;
@property (retain, nonatomic) VSViewControllerFactory *viewControllerFactory;
@property (weak, nonatomic) id<VSViewServiceHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)dealloc;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)enqueueViewServiceRequest:(id)a0 withIdentifier:(id)a1;
- (void)_request:(id)a0 didFinishWithResponse:(id)a1;
- (void)_request:(id)a0 didFailWithError:(id)a1;
- (void)_didChooseAdditionalProvidersForRequest:(id)a0;
- (void)_didCancelRequest:(id)a0;
- (void)_connectToViewServiceForRequest:(id)a0;
- (id)_requestForID:(id)a0;
- (void)_didCompleteRequest:(id)a0;
- (void)_presentViewServiceHostViewController;
- (void)_addRemoteViewControllerAsChildViewController;
- (void)_dismissViewServiceHostViewController;
- (void)_removeRemoteViewControllerAsChildViewController;
- (BOOL)_shouldAuthenticateAccountProviderWithIdentifier:(id)a0;
- (void)presentViewServiceRemoteViewController:(id)a0;
- (void)dismissViewServiceRemoteViewController:(id)a0;
- (void)viewServiceRemoteViewController:(id)a0 didTerminateWithError:(id)a1;
- (void)viewServiceRemoteViewController:(id)a0 request:(id)a1 didFinishWithResponse:(id)a2;
- (void)viewServiceRemoteViewController:(id)a0 request:(id)a1 didFailWithError:(id)a2;
- (void)viewServiceRemoteViewController:(id)a0 didChooseAdditionalProvidersForRequest:(id)a1;
- (void)viewServiceRemoteViewController:(id)a0 didCancelRequest:(id)a1;
- (void)viewServiceRemoteViewController:(id)a0 didSelectProviderWithIdentifier:(id)a1 vetoHandler:(id /* block */)a2;

@end
