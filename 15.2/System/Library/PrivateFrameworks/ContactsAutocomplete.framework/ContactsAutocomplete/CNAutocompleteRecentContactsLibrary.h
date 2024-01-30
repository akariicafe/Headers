@interface CNAutocompleteRecentContactsLibrary : NSObject

+ (id)queryForRequest:(id)a0;
+ (void)addLoggingHandlersToFuture:(id)a0;
+ (id)domainsForFetchRequest:(id)a0;
+ (id)addressKindsForSearchType:(unsigned long long)a0;
+ (unsigned long long)implicitGroupThresholdForSearchType:(unsigned long long)a0;
+ (id)domainsForSearchType:(unsigned long long)a0;
+ (id)library:(id)a0 recentContactsWithRequest:(id)a1;

@end
