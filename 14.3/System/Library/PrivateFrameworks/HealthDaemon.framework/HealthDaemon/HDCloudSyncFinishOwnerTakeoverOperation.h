@class NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncFinishOwnerTakeoverOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_deleteZones:(id)a0 container:(id)a1;
- (void)_deleteRecords:(id)a0 container:(id)a1;

@end
