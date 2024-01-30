@class NSXPCConnection;
@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;

@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

- (void)show;
- (id)init;
- (void).cxx_destruct;
- (void)connectionDidInterrupt;
- (void)didFinishWithError:(id)a0;
- (void)connectionDidInvalidate;
- (void)invalidate;
- (void)setRequestRecord:(id)a0 presentationRequests:(id)a1;
- (void)_remoteObjectProxyWithCompletion:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
