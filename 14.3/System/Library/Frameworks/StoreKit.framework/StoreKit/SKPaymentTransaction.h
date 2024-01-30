@class NSDate, NSString, NSArray, NSData, NSError, SKPayment;

@interface SKPaymentTransaction : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSString *matchingIdentifier;
@property (readonly, nonatomic) NSString *_transactionIdentifier;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property (readonly, nonatomic) SKPayment *payment;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) NSDate *transactionDate;
@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSData *transactionReceipt;
@property (readonly, nonatomic) long long transactionState;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;
- (id)UUID;
- (void)_setError:(id)a0;
- (id)initWithPayment:(id)a0;
- (BOOL)mergeWithServerTransaction:(id)a0;
- (void)_setTransactionState:(long long)a0;
- (BOOL)canMergeWithTransaction:(id)a0;
- (BOOL)mergeWithTransaction:(id)a0;
- (id)initWithServerTransaction:(id)a0;
- (void)_setDownloads:(id)a0;
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)a0;
- (void)_setOriginalTransaction:(id)a0;
- (void)_setTemporaryIdentifier:(id)a0;
- (void)_setTransactionDate:(id)a0;
- (void)_setTransactionIdentifier:(id)a0;
- (void)_setTransactionReceipt:(id)a0;

@end
