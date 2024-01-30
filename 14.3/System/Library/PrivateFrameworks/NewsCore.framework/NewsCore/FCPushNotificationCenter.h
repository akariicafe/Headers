@class NSString, NSMapTable, FCCKPrivateDatabase;

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling>

@property (retain, nonatomic) FCCKPrivateDatabase *privateDatabase;
@property (retain, nonatomic) NSMapTable *recordZoneObservers;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_saveDatabaseServerChangeToken:(id)a0;
- (void)prepareForUse;
- (void)disableSyncing;
- (void)_fetchChangesForRecordZoneIDs:(id)a0;
- (void)_handlePrivateDatabaseNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeRecordZoneObserver:(id)a0;
- (void)handleRemoteNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)addObserver:(id)a0 forChangesToRecordZoneID:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithPrivateDatabase:(id)a0 storeDirectory:(id)a1;
- (void)_deleteLocalDataForRecordZoneIDs:(id)a0;
- (void)enableSyncing;
- (id)serverChangeTokenKey;

@end
