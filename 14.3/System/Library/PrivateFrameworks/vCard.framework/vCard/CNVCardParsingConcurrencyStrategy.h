@interface CNVCardParsingConcurrencyStrategy : NSObject

+ (id)strategyForOptions:(id)a0;
+ (BOOL)shouldTryConcurrentParsingForOptions:(id)a0;

@end
