@class NSObject, PKPaymentTransaction, PKPaymentApplication;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionMapsLookupRequest : NSObject {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt;

- (void).cxx_destruct;
- (id)_merchantLookupRequest;
- (id)_brandFromMapItem:(id)a0;
- (id)_merchantFromMapItem:(id)a0;
- (id)initWithTransaction:(id)a0 paymentApplication:(id)a1;
- (void)startLookupWithCompletion:(id /* block */)a0;

@end
