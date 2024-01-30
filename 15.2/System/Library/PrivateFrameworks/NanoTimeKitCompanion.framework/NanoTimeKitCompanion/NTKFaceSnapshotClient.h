@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotClient : NSObject <NTKFaceSnapshotClient> {
    NSXPCConnection *_daemonConnection;
    BOOL _registrationNeeded;
    NSObject<OS_dispatch_queue> *_snapshotFileQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_register;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handleConnectionInterrupted;
- (void)snapshotFace:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_registerIfNeeded;
- (void)faceSnapshotChangedForKey:(id)a0;
- (void)_setupDaemonConnection;
- (void)_handleCustomMonogramChangedNotification;
- (void)_handleSignificantLocationChangeNotification;
- (void)_handleActiveDeviceChangedNotification;
- (void)_updateAllSnapshots;
- (void)createFaceForPerformanceTesting:(long long)a0;
- (void)performAfterCompletingCurrentlyPendingSnapshots:(id /* block */)a0;
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)synchronouslyUpdateAllSnapshots;
- (void)requestSnapshotOfFace:(id)a0;

@end
