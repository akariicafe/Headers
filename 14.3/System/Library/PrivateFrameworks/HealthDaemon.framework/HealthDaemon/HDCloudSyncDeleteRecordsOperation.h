@class NSArray, NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncDeleteRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDSynchronousTaskGroup *_taskGroup;
    NSArray *_recordIDsToDelete;
}

@property (copy) NSArray *recordIDsToDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_deleteRecords:(id)a0 container:(id)a1;

@end
