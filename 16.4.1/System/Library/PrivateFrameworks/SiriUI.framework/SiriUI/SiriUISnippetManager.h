@class NSString, NSDictionary, AFClientPluginManager, NSObject;
@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject <SRUIFSpeakableObjectProviding> {
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
    NSObject<OS_dispatch_queue> *_pluginBundlesQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)preloadPluginBundles;
- (BOOL)_compareObject:(id)a0 toObject:(id)a1 usingBlock:(id /* block */)a2;
- (id)_createDebugViewControllerForAceObject:(id)a0;
- (BOOL)_listItem:(id)a0 isEqualToListItem:(id)a1;
- (BOOL)_listItem:(id)a0 isPreferredOverListItem:(id)a1;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)_snippetExtensionsCache;
- (id)disambiguationItemForListItem:(id)a0 disambiguationKey:(id)a1;
- (id)extensionForSnippet:(id)a0;
- (id)filteredDisambiguationListItems:(id)a0;
- (id)listItemToPickInAutodisambiguationForListItems:(id)a0;
- (void)prewarmSnippetExtensionsCache;
- (id)snippetViewControllerForSnippet:(id)a0;
- (id)speakableProviderForObject:(id)a0;
- (id)transcriptItemForObject:(id)a0;
- (id)transcriptItemForObject:(id)a0 sizeClass:(long long)a1;

@end
