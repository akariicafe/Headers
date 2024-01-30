@class NSString, NTKFaceCollection, NSObject;
@protocol OS_dispatch_queue;

@interface NTKGreenfieldCompanionAppInstallationMonitor : NSObject <LSApplicationWorkspaceObserverProtocol, NTKFaceCollectionObserver> {
    BOOL _isRunning;
    BOOL _isObservingApplicationWorkspace;
    BOOL _isObservingWatchApps;
    BOOL _hasReloadedSinceObserving;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NTKFaceCollection *_library;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationInstallsDidCancel:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)applicationsDidFailToInstall:(id)a0;
- (void)dealloc;
- (void)faceCollectionDidLoad:(id)a0;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)_toggleObserving;
- (id)_existingPlaceholderItemIds;
- (void)_reloadInstallingAppsOnPhoneAndWatch;
- (id)_queue_calculatePendingRemovalItemIdsWithExistingPlaceholderIds:(id)a0;
- (void)_removePlaceholderComplicationWithItemIds:(id)a0;
- (void)fetchInstalledAppsOnWatchWithCompletionBlock:(id /* block */)a0;
- (id)_queue_fetchInstalledWatchAppsItemIds;
- (id)_queue_fetchNotInstalledWatchAppStatus;
- (void)handleAddFaceManagerDidUpdateFaceLibrary;

@end
