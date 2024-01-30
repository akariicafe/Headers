@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_personaID;
    BOOL _usingOtherPersona;
}

@property (readonly, nonatomic) NSArray *syncedRootURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_accountWillChange;
- (void)registerForSyncedLocationsChangesNotifications;
- (BOOL)_checkIfPersonaStillValid;
- (void)_fetchSyncedRootURLs;
- (id)initWithPersona:(id)a0;

@end
