@class NSArray, NSDictionary, NSMutableSet, NSLock;

@interface MSPCloudContainerChangeSet : NSObject {
    NSMutableSet *_changes;
    NSMutableSet *_deletes;
    NSLock *_lock;
}

@property (readonly, nonatomic) NSArray *changedRecords;
@property (readonly, nonatomic) NSArray *deletedRecords;
@property (readonly, nonatomic) NSDictionary *allChangesById;
@property (readonly, nonatomic) BOOL hasChanges;

- (void)addRecord:(id)a0;
- (void)addChangedRecord:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addDeletedRecord:(id)a0;
- (void)threadSafeAddReplicaRecord:(id)a0 toSet:(id)a1;
- (id)threadSafeArrayFromSet:(id)a0;

@end
