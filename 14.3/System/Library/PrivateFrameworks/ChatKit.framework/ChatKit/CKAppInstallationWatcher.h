@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKAppInstallationWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *installations;
@property (readonly, nonatomic) NSArray *inProgressInstallations;
@property (nonatomic) BOOL observingApplicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startListeningForAppBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)applicationInstallsDidChange:(id)a0;
- (void)removeObserver:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)dealloc;
- (void)applicationStateDidChange:(id)a0;
- (void)fetchAllAppInstallations:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)applicationsDidFailToInstall:(id)a0;
- (void)_loadBundleIdentifiersFromDiskLocked;
- (void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)a0 added:(BOOL)a1 updated:(BOOL)a2;
- (void)_saveBundleIdentifiersToDiskLocked;
- (void)_updateObservingApplicationWorkspaceLocked;
- (void)_updateAppProgressWithKnownChangedProxiesLocked:(id)a0;
- (void)_updateAppProgressWithKnownChangedProxies:(id)a0;
- (void)applicationInstallsDidUpdateIcon:(id)a0;
- (id)_applicationWorkspace;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidInstall:(id)a0;

@end
