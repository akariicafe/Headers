@interface SPDomainManager : NSObject

+ (void)initialize;
+ (id)defaultManager;

- (BOOL)siriSuggestionsEnabled;
- (void)applicationWasUninstalled:(id)a0;
- (void)registerApplication:(id)a0 withCategories:(id)a1;
- (id)getBundleIdForDomainNumber:(id)a0;
- (void)_removeAllDomainsForDisplayIdentifier:(id)a0;
- (void)notifyIndexer;

@end
