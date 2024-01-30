@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CPSClipCleanupManager : NSObject <LSApplicationWorkspaceObserverProtocol, RBSTerminationAssertionObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingTerminationAssertionsByBundleIDs;
    NSMutableDictionary *_clipDeletionPromisesByBundleIDs;
    NSObject<OS_os_transaction> *_deletionTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_parentBundleIDsFromAppRecord:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assertionTargetProcessDidExit:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)_registerDistributedNotificationHandler;
- (void)_registerLocalNotifications;
- (void)_removeClipCancellingPendingRemovalIfNeeded:(id)a0 completionHandler:(id /* block */)a1;
- (void)_uninstallClipWithBundleIdentifier:(id)a0 deletionPromise:(id)a1;
- (id)_allAppClipsForPlaceholderOnly:(BOOL)a0;
- (BOOL)_shouldDeleteClipWithRecord:(id)a0 parentRecord:(id)a1;
- (void)_deleteClipWhenBackgrounded:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didReceiveApplicationRegisteredNotification:(id)a0;
- (void)_didReceiveApplicationUnregisteredNotification:(id)a0;
- (void)_didReceiveMCSettingsChangedNotification:(id)a0;
- (void)_handleNewInstalledAppWithBundleID:(id)a0;
- (void)_didReceiveApplicationChangedNotification:(id)a0 operationHandler:(id /* block */)a1;
- (void)_handleNewUninstalledAppWithBundleID:(id)a0;
- (void)_applicationsDidChange:(id)a0 operationHandler:(id /* block */)a1;
- (void)_transferTCCPermissionsFromClipWithBundleID:(id)a0 toParentAppWithBundleID:(id)a1;
- (void)removeClipsByUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFailedClipInstallsWithCompletionHandler:(id /* block */)a0;
- (void)uninstallClipsWithParentAppInstalledWithCompletionHandler:(id /* block */)a0;

@end
