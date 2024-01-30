@class NSCountedSet, NSString, NSMutableDictionary, SBApplicationController, NSMutableSet, SBApplicationLibraryObserver;

@interface SBApplicationPlaceholderController : NSObject <SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBHProxiedApplicationPlaceholderDelegate> {
    SBApplicationController *_appController;
    SBApplicationLibraryObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    NSCountedSet *_removingPlaceholderProxies;
    BOOL _hasDownloadedFromStore;
    BOOL _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isUsingNetwork;
- (void)placeholderWantsUninstall:(id)a0;
- (void)applicationPlaceholdersInstalled:(id)a0;
- (void)applicationPlaceholdersNetworkUsageChanged:(BOOL)a0;
- (BOOL)placeholderShouldAllowPausing:(id)a0;
- (id)placeholdersByDisplayID;
- (void)applicationPlaceholdersAdded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)placeholderForDisplayID:(id)a0;
- (void)_processPendingProxies;
- (void)_postPlaceholdersDidChangeForAdded:(id)a0 modified:(id)a1 removed:(id)a2;
- (void)_finishPlaceholder:(id)a0;
- (BOOL)hasDownloadedStoreApplication;
- (void)dealloc;
- (void)_removePlaceholders:(id)a0 forInstall:(BOOL)a1;
- (void)_addPlaceholders:(id)a0;
- (void)applicationPlaceholdersCancelled:(id)a0;
- (void)iconAccessoriesDidUpdate:(id)a0;

@end
