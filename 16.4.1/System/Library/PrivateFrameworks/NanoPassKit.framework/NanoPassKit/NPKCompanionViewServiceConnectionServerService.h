@class NSString, NSXPCListener, NSMutableSet;
@protocol NPKCompanionViewServiceConnectionServerServiceDelegate;

@interface NPKCompanionViewServiceConnectionServerService : NSObject <NSXPCListenerDelegate, NPKCompanionViewServiceConnectionServerDelegate> {
    NSXPCListener *_xpcListener;
    NSMutableSet *_connectionServers;
}

@property (weak, nonatomic) id<NPKCompanionViewServiceConnectionServerServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_addServer:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_removeServer:(id)a0;
- (void).cxx_destruct;
- (void)handleCompanionItemSelectionRequestDidCancelForRequestIdentifier:(id)a0;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)a0 serviceProviderData:(id)a1 forRequestIdentifier:(id)a2;
- (void)handleCompanionValueEntryRequestDidCancelForRequestIdentifier:(id)a0;
- (void)handleCompanionValueEntryRequestFinishedWithCurrencyAmount:(id)a0 forRequestIdentifier:(id)a1;
- (void)viewServiceConnectionServer:(id)a0 didRequestPresentRemotePassItemSelectionViewControllerForRequest:(id)a1 contact:(id)a2 completion:(id /* block */)a3;
- (void)viewServiceConnectionServer:(id)a0 didRequestPresentRemotePassValueEntryViewControllerForRequest:(id)a1 contact:(id)a2 completion:(id /* block */)a3;

@end
