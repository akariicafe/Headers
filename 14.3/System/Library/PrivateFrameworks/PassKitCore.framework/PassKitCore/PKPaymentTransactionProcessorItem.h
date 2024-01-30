@class NSString, PKPaymentTransaction;

@interface PKPaymentTransactionProcessorItem : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionLock;
}

@property (retain, nonatomic) PKPaymentTransaction *paymentTransaction;
@property (retain, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) BOOL foundOptimalLocation;
@property (nonatomic) BOOL useBackgroundLocation;
@property (nonatomic) BOOL isClearingAttempt;

- (id)init;
- (void).cxx_destruct;

@end
