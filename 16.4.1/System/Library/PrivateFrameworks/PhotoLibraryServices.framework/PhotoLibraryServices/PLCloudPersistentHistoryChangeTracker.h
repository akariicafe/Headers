@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentStoreCoordinator *_coordinator;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

@property (readonly, copy) NSString *name;
@property (weak, nonatomic) id<PLCloudPersistentHistoryChangeTrackerDelegate> delegate;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly) BOOL hasChangeTrackerToken;

- (BOOL)connect;
- (id)currentToken;
- (BOOL)isConnected;
- (void)forceTokenToCurrent;
- (void)disconnect;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (id)fetchAllEventsInContext:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)clearToken;
- (void)_unregisterForChangeHandlingNotifications;
- (id)lastKnownTokenFromDisk;
- (void)_registerForChangeHandlingNotifications;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void).cxx_destruct;
- (void)updateLastKnownTokenToResult:(id)a0;

@end
