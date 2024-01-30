@class NSArray, NSString, HDSynchronousTaskGroup, CKContainer;

@interface HDCloudSyncFetchRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer *_container;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) id /* block */ recordHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
