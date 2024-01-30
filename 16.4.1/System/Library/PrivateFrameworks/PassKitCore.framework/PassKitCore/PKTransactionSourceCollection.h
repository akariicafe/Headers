@class NSSet;

@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)account;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTransactionSource:(id)a0;
- (id)initWithTransactionSources:(id)a0;
- (id)paymentPass;
- (id)transactionSourceForTransactionSourceIdentifier:(id)a0;
- (id)transactionSourceIdentifiers;
- (id)transactionSourcesForType:(unsigned long long)a0;

@end
