@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly, nonatomic) NSArray *syncedRootURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accountWillChange;
- (void)_fetchSyncedRootURLs;
- (void)registerForSyncedLocationsChangesNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
