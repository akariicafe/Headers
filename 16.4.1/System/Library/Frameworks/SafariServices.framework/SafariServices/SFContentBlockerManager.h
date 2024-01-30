@class NSSet, NSString, NSMutableSet, NSMutableDictionary, NSObject, WBSPersistentPropertyListStore;
@protocol OS_dispatch_queue;

@interface SFContentBlockerManager : NSObject <WBSCloudExtensionStateProvider> {
    id _extensionMatchingContext;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
    WBSPersistentPropertyListStore *_contentBlockerStateStore;
    BOOL _contentBlockerStateStoreRequiresReload;
}

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *enabledExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_loadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_createContentExtensionsDirectoryWithURL:(id)a0;
+ (id)contentBlockerStore;
+ (id)sharedManager;
+ (id)_contentBlockerLoaderConnection;

- (void)savePendingChangesBeforeTermination;
- (id)cloudExtensionStateForStateManager:(id)a0;
- (void)_updateContentBlockerStateFromDiscoveredContentBlockers:(id)a0;
- (void)setExtensionWithComposedIdentifier:(id)a0 isEnabledInCloud:(BOOL)a1;
- (id)displayNameForExtension:(id)a0;
- (void)reloadUserContentControllerReadingStateFromDisk:(BOOL)a0;
- (void)addObserver:(id)a0;
- (BOOL)extensionIsEnabled:(id)a0;
- (void)_removeAllContentRuleLists;
- (void)informObserversThatContentBlockerManagerExtensionListDidChange;
- (void)_noteRecompilationWasAttemptedForExtension:(id)a0;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2;
- (void)removeObserver:(id)a0;
- (void)addContentRuleList:(id)a0 forExtension:(id)a1;
- (void)_addContentRuleList:(id)a0 forWebExtension:(id)a1;
- (BOOL)_hasRecompilationBeenAttemptedForExtension:(id)a0;
- (void)_saveContentBlockerRecompilationInformation;
- (void)_loadContentBlockerStateFromDisk;
- (id)_contentBlockerWithComposedIdentifier:(id)a0;
- (void)_contentBlockerEnabledStateDidChange:(id)a0;
- (void)loadDeclarativeNetRequestContentBlockerWithIdentifier:(id)a0 rules:(id)a1 completionHandler:(id /* block */)a2;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)a0;
- (void)_beginContentBlockerDiscovery;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;
- (id)init;
- (void)_loadDeclarativeNetRequestContentBlockers;
- (BOOL)hasExtensionWithComposedIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_findNewExtensionsAdded:(id)a0 toExistingExtensions:(id)a1;

@end
