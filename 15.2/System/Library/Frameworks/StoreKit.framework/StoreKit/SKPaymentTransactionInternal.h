@class NSDate, NSString, NSArray, NSData, NSError, SKPaymentTransaction, SKPayment;

@interface SKPaymentTransactionInternal : NSObject {
    NSString *_uuid;
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    long long _transactionState;
}

- (void).cxx_destruct;
- (id)init;

@end
