@class NSArray, NSMutableDictionary, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue, FPAppRegistryDelegate;

@interface FPAppRegistry : NSObject {
    NSMutableDictionary *_appMetadataByBundleID;
    NSMutableDictionary *_appMetadataByDisplayName;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (class, retain, nonatomic) NSNotificationCenter *notificationCenterOverride;
@property (class, retain) FPAppRegistry *sharedRegistry;

@property unsigned long long dataState;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic) BOOL keepUpToDate;
@property (weak, nonatomic) id<FPAppRegistryDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *listOfMonitoredApps;

+ (id)deserializeListOfAppsFromNotification:(id)a0;
+ (id)serializeListOfApps:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addApps:(id)a0;
- (void)_addApps:(id)a0;
- (id)appForBundleID:(id)a0;
- (void)populateRegistry;
- (void)_didUpdateApps:(id)a0;
- (void)_didRemoveApps:(id)a0;
- (BOOL)_isAppLibrary:(id)a0 appMetadata:(id *)a1 userVisible:(BOOL *)a2;
- (id)_bundleIDForHomonymOfApp:(id)a0;
- (id)appForDisplayName:(id)a0;
- (BOOL)isAppLibrary:(id)a0;
- (id)removeAppsWithBundleIDs:(id)a0;
- (void)_registerForNotification:(id)a0 handler:(SEL)a1;
- (id)promoteItemToAppLibraryIfNeeded:(id)a0;

@end
