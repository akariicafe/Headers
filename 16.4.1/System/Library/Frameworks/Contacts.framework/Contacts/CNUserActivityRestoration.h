@interface CNUserActivityRestoration : NSObject

+ (id)os_log;
+ (id)contactBestMatchingPayload:(id)a0 additionalKeysToFetch:(id)a1 contactStore:(id)a2 error:(id *)a3;
+ (id)contactsForServerUUIDs:(id)a0 additionalKeysToFetch:(id)a1 contactStore:(id)a2 error:(id *)a3;
+ (id)contactsGivenPayload:(id)a0 keysToFetch:(id)a1 contactStore:(id)a2 error:(id *)a3;
+ (id)contactsToCreateGivenPayload:(id)a0 error:(id *)a1;
+ (id)searchQueryGivenPayload:(id)a0;

@end
