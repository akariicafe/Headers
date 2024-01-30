@class NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncMarkAllOwnersDisabledOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (id)_updatedRecordsForContainer:(id)a0 disabledOwnerIdentifiers:(id)a1;
- (id)_updatedMasterRecordForZone:(id)a0 container:(id)a1 disabledOwnerIdentifiers:(id)a2;
- (id)_updatedRegistryRecordForZone:(id)a0 container:(id)a1 disabledOwnerIdentifiers:(id)a2;

@end
