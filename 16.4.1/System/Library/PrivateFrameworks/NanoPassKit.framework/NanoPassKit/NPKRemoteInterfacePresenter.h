@class NSXPCConnection;
@protocol NPKRemoteInterfacePresenterDelegate;

@interface NPKRemoteInterfacePresenter : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<NPKRemoteInterfacePresenterDelegate> delegate;

- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)a0 fromSource:(long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)a0 withError:(id)a1;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 forHostApplicationName:(id)a1 hostBundleIdentifier:(id)a2 hostProcessIdentifier:(int)a3 hostIdentifier:(id)a4 orientation:(id)a5 completion:(id /* block */)a6;
- (void)presentPasscodeUpgradeRequestWithChangeType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)presentSetupApplePayAlert:(id)a0;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)a0 completion:(id /* block */)a1;
- (void)tearDownPasscodeUpgradeRequestWithPasscodeChanged:(BOOL)a0 error:(id)a1;

@end
