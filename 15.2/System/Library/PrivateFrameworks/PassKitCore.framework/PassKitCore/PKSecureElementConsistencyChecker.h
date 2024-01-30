@class PKPaymentWebService, NSObject;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
}

@property (nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

+ (BOOL)isCheckingConsistencyForSecureElementID:(id)a0;

- (void)queue_startWithCompletion:(id /* block */)a0;
- (void)_rescheduleWithBackoff;
- (void)_rescheduleCheckInTimeInterval:(double)a0 backoffLevel:(long long)a1;
- (void)_syncWithTSMCompletion:(id /* block */)a0;
- (BOOL)_downloadPasses;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1 cloudStoreCoordinatorDelegate:(id)a2;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;

@end
