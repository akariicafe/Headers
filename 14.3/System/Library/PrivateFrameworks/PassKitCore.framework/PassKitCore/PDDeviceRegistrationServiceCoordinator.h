@class NSMutableArray, PDPeerPaymentWebServiceCoordinator, NSObject, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
}

@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePaymentWebServiceContextChanged:(id)a0;
- (void)dealloc;
- (void)notePasscodeChanged;
- (void)_performDeviceRegistrationWithReason:(id)a0 forceApplePayRegister:(BOOL)a1 forcePeerPaymentRegister:(BOOL)a2;
- (id)initWithPaymentWebServiceCoordinator:(id)a0 peerPaymentWebServiceCoordinator:(id)a1;
- (void)performDeviceRegistrationForReason:(id)a0 action:(long long)a1 forceApplePayRegister:(BOOL)a2 forcePeerPaymentRegister:(BOOL)a3 completion:(id /* block */)a4;
- (void)_performDeviceRegistrationWithReason:(id)a0 forceApplePayRegister:(BOOL)a1 forcePeerPaymentRegister:(BOOL)a2 completion:(id /* block */)a3;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)a0 error:(id)a1;
- (void)_peerPaymentRegisterWithURL:(id)a0 paymentWebService:(id)a1 forceRegister:(BOOL)a2 completion:(id /* block */)a3;
- (void)_canAutomaticallyRegisterWithWebService:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldAttemptBackgroundPeerPaymentRegistration;

@end
