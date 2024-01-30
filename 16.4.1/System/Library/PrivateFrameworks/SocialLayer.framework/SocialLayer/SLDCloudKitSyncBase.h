@class CKSyncEngine, NSString, SLDCloudKitConfiguration, SLDCloudKitSyncPersistence, NSObject, CKContainer;
@protocol OS_dispatch_queue;

@interface SLDCloudKitSyncBase : NSObject <CKSyncEngineDataSource> {
    CKContainer *_container;
    CKSyncEngine *_syncEngine;
    SLDCloudKitConfiguration *_configuration;
    SLDCloudKitSyncPersistence *_persistence;
    NSObject<OS_dispatch_queue> *_queue;
    double _timestamp;
    BOOL _accountChangesCheckScheduled;
    BOOL _saltLocked;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (id)database;
- (id)persistence;
- (void)accountChangedNotification:(id)a0;
- (id)salt;
- (id)container;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (id)configuration;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didUpdateMetadata:(id)a1;
- (id)queue;
- (id)syncEngine;
- (id)initWithConfiguration:(id)a0;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (double)currentTimestamp;
- (void)initializeState;
- (void)accountStatusChanged;
- (void)addMetadataToRecord:(id)a0;
- (void)checkForAccountChanges;
- (void)checkForAccountChangesNow;
- (void)createSyncEngine;
- (unsigned long long)getIncrementedBatchNumber;
- (void)handleMetadataSizeBecomingEligibleForSync;
- (id)idStringForType:(id)a0 uniqueData:(id)a1;
- (id)idStringForType:(id)a0 uniqueString:(id)a1;
- (BOOL)recordSupportsOurVersion:(id)a0;

@end
