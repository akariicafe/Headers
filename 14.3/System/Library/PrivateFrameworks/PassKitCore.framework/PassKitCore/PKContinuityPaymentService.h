@class NSArray, NSObject, PKXPCService;
@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteDeviceLock;
}

@property (readonly, nonatomic) NSArray *remoteDevices;
@property (weak, nonatomic) id<PKContinuityPaymentServiceDelegate> delegate;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendPaymentHostUpdate:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)sendPaymentStatus:(long long)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)hasRemoteDevices;
- (void)didReceiveUpdatedPaymentDevices:(id)a0;
- (void)didReceivePaymentHostUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceivePaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)noteAccountDeleted;
- (void)requestInstrumentThumbnail:(id)a0 forRemoteDevice:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)didReceivePayment:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceivePaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)setRemoteDevices:(id)a0;
- (BOOL)canMakePaymentsWithRemoteDevices;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendPaymentSetupRequest:(id)a0 appDisplayName:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)sendRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendPayment:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)sendPaymentResult:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)promptDetailsForVirtualCard:(id)a0 showNotification:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePaymentDevices;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (id)_remoteObjectProxy;
- (void)sendPaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;

@end
