@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProfileManager : NSObject {
    BOOL _started;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_workQueue_managedApplicationBundleIDs;
    NSMutableDictionary *_workQueue_profilesBySignerIdentity;
}

@property (readonly, nonatomic, getter=isStarted) BOOL started;

+ (id)sharedInstance;

- (void)startService;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reloadProfiles;
- (void)_managedAppsChangedNotification:(id)a0;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
- (void)_workQueue_reloadProfiles;
- (BOOL)isManaged:(id)a0;
- (id)profilesForSignerIdentity:(id)a0;

@end
