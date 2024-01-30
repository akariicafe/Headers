@class NSMutableArray, PDPeerPaymentWebServiceCoordinator, NSObject, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
}

@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;

- (id)initWithPaymentWebServiceCoordinator:(id)a0 peerPaymentWebServiceCoordinator:(id)a1;
- (BOOL)_shouldAttemptPeerPaymentRegistrationForce:(BOOL)a0;
- (void)_createTransactionAndPerformDeviceRegistrationWithRegistrationTask:(id)a0;
- (void)notePasscodeChanged;
- (void)_peerPaymentRegisterWithURL:(id)a0 paymentWebService:(id)a1 forceRegister:(BOOL)a2 completion:(id /* block */)a3;
- (void)_canAutomaticallyRegisterWithWebService:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_performDeviceRegistrationWithRegistrationTask:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 action:(long long)a2 forceApplePayRegister:(BOOL)a3 forcePeerPaymentRegister:(BOOL)a4 completion:(id /* block */)a5;
- (void)_handlePaymentWebServiceContextChanged:(id)a0;
- (void)dealloc;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)a0 error:(id)a1;

@end
