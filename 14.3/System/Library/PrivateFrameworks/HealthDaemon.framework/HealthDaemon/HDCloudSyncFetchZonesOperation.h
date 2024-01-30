@class NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncFetchZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_startZoneFetchForContainer:(id)a0 database:(id)a1;
- (void)_fetchDatabaseChangesOperationDidFinishWithChangedZones:(id)a0 deletedZones:(id)a1 container:(id)a2 database:(id)a3 error:(id)a4;

@end
