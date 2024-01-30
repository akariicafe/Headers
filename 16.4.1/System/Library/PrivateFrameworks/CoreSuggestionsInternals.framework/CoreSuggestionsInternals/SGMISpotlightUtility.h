@interface SGMISpotlightUtility : NSObject

+ (id)itemWithUniqueIdentifier:(id)a0 error:(id *)a1;
+ (id)defaultCSSearchQueryContextFetchAttributes;
+ (id)findDeletedEmailAddresses:(id)a0 mdSearchableItemAttribute:(id)a1 fromDaysAgo:(unsigned long long)a2 error:(id *)a3;
+ (id)nicknameCSSearchQueryContextFetchAttributes;
+ (id)queryEmailsFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 fetchAttributes:(id)a2 filterQuery:(id)a3 queryString:(id)a4 bundleIds:(id)a5 spotlightTimeOut:(unsigned long long)a6 withError:(id *)a7;
+ (BOOL)queryFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withError:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)queryFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withError:(id *)a3 simulatedCSSIs:(id)a4 handler:(id /* block */)a5;
+ (void)querySentMailsForNicknameMatchingFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;

@end
