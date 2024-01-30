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
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void)disconnect;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (id)fetchAllEventsInContext:(id)a0;
- (void).cxx_destruct;
- (void)_unregisterForChangeHandlingNotifications;
- (BOOL)isConnected;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (void)updateLastKnownTokenToResult:(id)a0;
- (void)_registerForChangeHandlingNotifications;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (void)forceTokenToCurrent;
- (id)currentToken;

@end
