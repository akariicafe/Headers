@class NSString, NPKCompanionViewServiceConnection;
@protocol NPKRemotePassActionUIServiceDelegate;

@interface NPKRemotePassActionUIService : NSObject <NPKCompanionViewServiceConnectionDelegate>

@property (retain, nonatomic) NPKCompanionViewServiceConnection *connection;
@property (weak, nonatomic) id<NPKRemotePassActionUIServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentRemotePassValueEntryViewControllerForRequest:(id)a0 contact:(id)a1 completion:(id /* block */)a2;
- (void)presentRemotePassItemSelectionViewControllerForRequest:(id)a0 contact:(id)a1 completion:(id /* block */)a2;
- (void)companionViewServiceConnection:(id)a0 handleCompanionValueEntryDidFinishWithCurrencyAmount:(id)a1 forRequestWithIdentifier:(id)a2;
- (void)companionViewServiceConnection:(id)a0 handleCompanionValueEntryDidCancelForRequestIdentifier:(id)a1;
- (void)companionViewServiceConnection:(id)a0 handleCompanionItemSelectionDidFinishWithRenewalAmount:(id)a1 serviceProviderData:(id)a2 forRequestWithIdentifier:(id)a3;
- (void)companionViewServiceConnection:(id)a0 handleCompanionItemSelectionDidCancelForRequestIdentifier:(id)a1;

@end
