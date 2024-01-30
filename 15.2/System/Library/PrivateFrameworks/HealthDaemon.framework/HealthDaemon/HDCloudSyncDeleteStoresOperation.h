@class NSArray, NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncDeleteStoresOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (readonly, copy) NSArray *storeRecordsToDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 storeRecordsToDelete:(id)a2;

@end
