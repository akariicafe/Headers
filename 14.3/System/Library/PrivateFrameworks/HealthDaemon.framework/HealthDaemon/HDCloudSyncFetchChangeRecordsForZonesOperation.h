@class NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableArray, HDSynchronousTaskGroup;

@interface HDCloudSyncFetchChangeRecordsForZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray *_zones;
    NSDictionary *_initialServerChangeTokensByIdentifier;
    NSMutableDictionary *_finalServerChangeTokensByIdentifier;
    NSMutableArray *_fetchedRecords;
    NSMutableArray *_deletedRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSDictionary *changeTokensByZone;
@property (readonly, copy) NSArray *changeRecords;
@property (copy) id /* block */ recordFilter;
@property (copy) id /* block */ expiredServerChangeTokenHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_fetchChangeRecordsForContainer:(id)a0;
- (id)_configurationsByRecordZoneIDForContainer:(id)a0;
- (void)_fetchChangeRecordsForContainer:(id)a0 configurations:(id)a1;
- (void)_fetchDidFinishForZone:(id)a0 changeToken:(id)a1 container:(id)a2 error:(id)a3;
- (void)_fetchedChangedRecord:(id)a0;
- (void)_recordWithIDWasDeleted:(id)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 zones:(id)a2 changeTokensByZone:(id)a3;

@end
