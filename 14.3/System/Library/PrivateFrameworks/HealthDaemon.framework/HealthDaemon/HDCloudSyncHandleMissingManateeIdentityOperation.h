@class NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncHandleMissingManateeIdentityOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_handleLostManateeIdentitiesForZones:(id)a0 container:(id)a1;
- (void)_deleteZonesForLostManateeIdentitiesInZones:(id)a0 container:(id)a1 database:(id)a2;
- (void)_leaveSharesForLostManateeIdentitiesInZones:(id)a0 container:(id)a1 database:(id)a2;

@end
