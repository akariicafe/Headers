@interface SGMISpotlightUtility : NSObject

+ (id)defaultCSSearchQueryContextFetchAttributes;
+ (BOOL)queryFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withError:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)queryFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withError:(id *)a3 simulatedCSSIs:(id)a4 handler:(id /* block */)a5;
+ (id)itemWithUniqueIdentifier:(id)a0 error:(id *)a1;
+ (id)findDeletedEmailAddresses:(id)a0 mdSearchableItemAttribute:(id)a1 fromDaysAgo:(unsigned long long)a2 error:(id *)a3;

@end
