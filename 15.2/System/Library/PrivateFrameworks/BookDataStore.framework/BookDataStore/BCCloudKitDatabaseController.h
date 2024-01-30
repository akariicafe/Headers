@class NSURL, NSMutableDictionary, NSMapTable, CKServerChangeToken, BUCoalescingCallBlock, NSObject, NSString, CKDatabase, CKRecordID, NSMutableSet, NSArray, NSData, CKContainer;
@protocol OS_dispatch_queue;

@interface BCCloudKitDatabaseController : NSObject <BCCloudDataPrivacyDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _zoneObserversLock;
}

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKContainer *container;
@property (copy, nonatomic) NSURL *archiveURL;
@property (copy, nonatomic) NSArray *desiredRecordZoneIDs;
@property (retain, nonatomic) NSMutableSet *changedRecordZoneIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedArchive;
@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain, nonatomic) NSData *recordIDSalt;
@property (retain, nonatomic) NSMutableDictionary *recordZones;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMapTable *zoneObservers;
@property (retain, nonatomic) NSMutableDictionary *tokenStores;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedZoneFetch;
@property (nonatomic) BOOL attachedToContainer;
@property (nonatomic) double backOffInterval;
@property (nonatomic) BOOL serverFetchPostponed;
@property (nonatomic) BOOL fetchRecordZoneChangesSuccess;
@property (nonatomic) BOOL hasSubscription;

+ (id)decodeRecordFromSystemFields:(id)a0;
+ (id)encodeRecordSystemFields:(id)a0;
+ (void)startInternetConnectionReachabilityNotifier;

- (void)detach;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)establishedSalt;
- (void)fetchChangesWithCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0 zoneID:(id)a1;
- (void)addObserver:(id)a0 recordType:(id)a1;
- (void)removeObserver:(id)a0 recordType:(id)a1;
- (id)recordNameFromRecordType:(id)a0 identifier:(id)a1;
- (void)p_unarchive;
- (void)p_internetReachabilityChanged:(id)a0;
- (id)p_archiveToData;
- (void)p_informObserversOfAttachmentChange;
- (void)p_fetchZoneChanges:(id /* block */)a0;
- (void)p_fetchDatabaseChanges:(id /* block */)a0;
- (void)p_unsubscribeToContainer:(id)a0;
- (void)p_scheduleArchiveWithCompletion:(id /* block */)a0;
- (void)p_subscribeWithCompletion:(id /* block */)a0;
- (void)p_createRecordIDSaltWithCompletion:(id /* block */)a0;
- (void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)a0 completion:(id /* block */)a1;
- (void)zonesTemporarilyUnreadableWithReason:(id)a0 completion:(id /* block */)a1;
- (void)p_createRecordZones:(id)a0 completionHandler:(id /* block */)a1;
- (void)detachWithCompletion:(id /* block */)a0;
- (id)saltedAndHashedIDFromLocalID:(id)a0;
- (void)p_informObserversOfSaltVersionIdentifierChanged:(id)a0 forZones:(id)a1 completion:(id /* block */)a2;
- (void)p_informObserversOfCompletedFetchOfZone:(id)a0;
- (void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_fetchRecordZoneChanges:(id)a0 optionsByRecordZoneID:(id)a1 completionHandler:(id /* block */)a2;
- (void)p_informObserversOfRecordsChanged:(id)a0 forRecordType:(id)a1;
- (void)p_informObserversOfRecordsChanged:(id)a0;
- (void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)a0;
- (id)p_unarchiveFromData:(id)a0;
- (void)attachToZones:(id)a0 completion:(id /* block */)a1;
- (void)_deleteRecordZonesWithIDs:(id)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithSubscriptionID:(id)a0 appBundleIdentifier:(id)a1 archiveURL:(id)a2;
- (void)fetchRecordForRecordID:(id)a0 completion:(id /* block */)a1;
- (void)willAttachToContainer:(id)a0 serviceMode:(BOOL)a1 completion:(id /* block */)a2;
- (void)connectUserTo:(id)a0 container:(id)a1 updateSubscription:(BOOL)a2 completion:(id /* block */)a3 subscriptionCompletion:(id /* block */)a4;
- (void)getAttached:(id /* block */)a0;
- (void)recordZoneWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerServerChangeTokenStore:(id)a0 forZoneID:(id)a1;
- (void)unregisterServerChangeTokenStore:(id)a0;

@end
