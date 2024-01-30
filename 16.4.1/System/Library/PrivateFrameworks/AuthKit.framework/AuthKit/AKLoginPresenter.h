@class NSXPCListener, NSString;

@interface AKLoginPresenter : NSObject <NSXPCListenerDelegate, AKLoginPresenterHostInterfaceProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (copy, nonatomic) id /* block */ presentationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_callCompletionWithResults:(id)a0 password:(id)a1 additionalData:(id)a2 error:(id)a3;
- (void)authenticationRequestFinishedWithResults:(id)a0 password:(id)a1 additionalData:(id)a2 error:(id)a3;
- (void)presentOOPLoginUIWithContext:(id)a0 completion:(id /* block */)a1;

@end
