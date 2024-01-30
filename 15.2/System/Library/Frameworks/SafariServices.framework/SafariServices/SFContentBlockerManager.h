@class NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SFContentBlockerManager : NSObject {
    id _extensionMatchingContext;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
}

@property (readonly, nonatomic) NSSet *extensions;

+ (id)sharedManager;
+ (id)contentBlockerStore;
+ (id)_contentBlockerLoaderConnection;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_createContentExtensionsDirectoryWithURL:(id)a0;

- (void)informObserversThatContentBlockerManagerExtensionListDidChange;
- (void)_noteRecompilationWasAttemptedForExtension:(id)a0;
- (BOOL)_hasRecompilationBeenAttemptedForExtension:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)a0;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (void)loadDeclarativeNetRequestContentBlockerWithIdentifier:(id)a0 rules:(id)a1 completionHandler:(id /* block */)a2;
- (void)_loadDeclarativeNetRequestContentBlockers;
- (BOOL)extensionIsEnabled:(id)a0;
- (void)_saveContentBlockerRecompilationInformation;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1;
- (void)_beginContentBlockerDiscovery;
- (void).cxx_destruct;
- (id)init;
- (void)reloadUserContentController;
- (void)addContentRuleList:(id)a0;
- (void)_loadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addContentRuleList:(id)a0;
- (id)_findNewExtensionsAdded:(id)a0 toExistingExtensions:(id)a1;
- (id)displayNameForExtension:(id)a0;
- (void)_removeAllContentRuleLists;

@end
