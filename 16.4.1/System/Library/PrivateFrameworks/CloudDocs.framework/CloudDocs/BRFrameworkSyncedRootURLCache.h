@class NSArray, NSString, NSObject;
@protocol OS_dispatch_workloop;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_workloop> *_notificationWorkLoop;
    NSString *_personaID;
    BOOL _usingOtherPersona;
}

@property (readonly, nonatomic) NSArray *syncedRootURLs;
@property (readonly, nonatomic) BOOL cacheMightBePopulated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersona:(id)a0;
- (void)dealloc;
- (void)_accountWillChange;
- (void).cxx_destruct;
- (BOOL)_checkIfPersonaStillValid;
- (void)_fetchSyncedRootURLs;
- (void)registerForSyncedLocationsChangesNotifications;

@end
