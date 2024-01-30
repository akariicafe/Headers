@interface CNVCardParsingConcurrencyStrategy : NSObject

+ (BOOL)shouldTryConcurrentParsingForOptions:(id)a0;
+ (id)strategyForOptions:(id)a0;

@end
