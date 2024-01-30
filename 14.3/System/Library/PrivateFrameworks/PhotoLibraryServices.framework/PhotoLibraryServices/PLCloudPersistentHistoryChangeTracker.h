@class NSObject, NSString, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver, NSManagedObjectContext;
@protocol OS_dispatch_queue, PLCloudChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject <PLCloudChangeTracker> {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentHistoryToken *_lastKnownDeletionToken;
    NSManagedObjectContext *_context;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (weak, nonatomic) id<PLCloudChangeTrackerDelegate> delegate;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly) BOOL hasChangeTrackerToken;
@property (readonly, copy) NSString *lastKnownDeletionTokenDescription;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedDataWithToken:(id)a0;
+ (id)unarchiveTokentWithData:(id)a0;

- (BOOL)connect;
- (void)disconnect;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void).cxx_destruct;
- (void)clearToken;
- (void)updateLastKnownTokenToResult:(id)a0;
- (id)fetchAllEvents;
- (void)forceTokenToCurrent;
- (id)currentToken;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchDeletionEvents;
- (void)updateLastKnownDeletionTokenToResult:(id)a0;
- (id)lastKnownTokenFromDisk;
- (void)_registerForChangeHandlingNotifications;
- (void)_unregisterForChangeHandlingNotifications;
- (id)eventsResultFromPersistentHistoryToken:(id)a0;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (void)_updateLastKnownDeletionTokenToToken:(id)a0;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (BOOL)isConnected;

@end
