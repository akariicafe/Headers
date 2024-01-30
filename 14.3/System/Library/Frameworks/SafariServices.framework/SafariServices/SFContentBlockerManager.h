@class WKUserContentController, NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SFContentBlockerManager : NSObject {
    id _extensionMatchingContext;
    WKUserContentController *_userContentController;
    NSSet *_extensions;
    NSMutableSet *_observers;
    BOOL _lastExtensionDiscoveryHadError;
    NSMutableDictionary *_extensionsRecompiledAfterBackup;
    NSObject<OS_dispatch_queue> *_recompilationInformationAccessQueue;
}

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) WKUserContentController *userContentController;

+ (void)_createContentExtensionsDirectoryWithURL:(id)a0;
+ (id)_contentBlockerLoaderConnection;
+ (id)sharedManager;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)contentBlockerStore;
+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)_loadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_beginContentBlockerDiscovery;
- (void)removeObserver:(id)a0;
- (void)_noteRecompilationWasAttemptedForExtension:(id)a0;
- (id)_findNewExtensionsAdded:(id)a0 toExistingExtensions:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)_hasRecompilationBeenAttemptedForExtension:(id)a0;
- (BOOL)extensionIsEnabled:(id)a0;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1;
- (void)_recompileEnabledContentBlockersIfNeeded:(id)a0;
- (id)displayNameForExtension:(id)a0;
- (void)reloadUserContentController;
- (void)_saveContentBlockerRecompilationInformation;
- (void)_loadContentBlockerRecompilationInformationIfNeeded;

@end
