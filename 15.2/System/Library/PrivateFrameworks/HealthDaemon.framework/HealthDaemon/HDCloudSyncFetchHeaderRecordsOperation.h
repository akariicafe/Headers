@class NSArray, NSString, NSMutableDictionary, NSMutableSet, HDSynchronousTaskGroup;

@interface HDCloudSyncFetchHeaderRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_fetchedRecordIDsByContainerID;
    NSMutableSet *_invalidRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (nonatomic) BOOL fetchSubscriptions;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
