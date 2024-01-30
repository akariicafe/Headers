@class AFClientPluginManager, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject {
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)snippetViewControllerForSnippet:(id)a0;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)_snippetExtensionsCache;
- (BOOL)_compareObject:(id)a0 toObject:(id)a1 usingBlock:(id /* block */)a2;
- (id)transcriptItemForObject:(id)a0 sizeClass:(long long)a1;
- (id)_createDebugViewControllerForAceObject:(id)a0;
- (id)filteredDisambiguationListItems:(id)a0;
- (id)disambiguationItemForListItem:(id)a0 disambiguationKey:(id)a1;
- (BOOL)_listItem:(id)a0 isEqualToListItem:(id)a1;
- (BOOL)_listItem:(id)a0 isPreferredOverListItem:(id)a1;
- (void)preloadPluginBundles;
- (void)prewarmSnippetExtensionsCache;
- (id)extensionForSnippet:(id)a0;
- (id)transcriptItemForObject:(id)a0;
- (id)listItemToPickInAutodisambiguationForListItems:(id)a0;
- (id)speakableProviderForObject:(id)a0;

@end
