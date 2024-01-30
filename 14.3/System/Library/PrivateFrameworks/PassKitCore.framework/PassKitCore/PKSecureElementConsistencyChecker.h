@class PKPaymentWebService, NSObject;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
}

@property (nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

+ (long long)cleanupActionsForDeviceCredential:(id)a0 withAssociatedPassCredential:(id)a1;
+ (long long)cleanupActionsForApplet:(id)a0 withAssociatedPaymentApplication:(id)a1;
+ (id)checkConsistencyWithDeviceState:(id)a0 registeredRegions:(id)a1;
+ (BOOL)isCheckingConsistencyForSecureElementID:(id)a0;

- (void).cxx_destruct;
- (void)queue_startWithCompletion:(id /* block */)a0;
- (BOOL)_downloadPasses;
- (void)_rescheduleWithBackoff;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1 cloudStoreCoordinatorDelegate:(id)a2;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1;
- (void)startWithCompletion:(id /* block */)a0;

@end
