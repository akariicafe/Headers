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

@end
