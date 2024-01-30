@class NSArray, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling>

@property (class, readonly, nonatomic) Class changeClass;
@property (class, readonly, nonatomic) int messageType;

@property (readonly, nonatomic) NSHashTable *servicesTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (void)requestSync;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)requestFullResync;
- (BOOL)deleteSyncedData:(id *)a0;
- (BOOL)resetSyncStateForService:(id)a0 error:(id *)a1;
- (BOOL)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (void)registerSyncService:(id)a0;
- (void)deregisterSyncService:(id)a0;

@end
