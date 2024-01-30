@interface HDUserDomainConceptProcessor : NSObject

+ (BOOL)processUserDomainConceptsAfter:(long long)a0 transactionLimit:(long long)a1 outAnchor:(long long *)a2 outProcessedConceptsCount:(long long *)a3 transaction:(id)a4 error:(id *)a5;

- (id)init;

@end
