@class NSSet;

@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources;

- (id)paymentPass;
- (id)transactionSourceIdentifiers;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTransactionSources:(id)a0;
- (id)initWithTransactionSource:(id)a0;
- (id)transactionSourceForTransactionSourceIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)transactionSourcesForType:(unsigned long long)a0;

@end
