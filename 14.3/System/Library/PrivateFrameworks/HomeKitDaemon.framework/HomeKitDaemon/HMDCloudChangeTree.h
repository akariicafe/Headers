@class NSSet, NSMapTable, NSArray, NSMutableArray;

@interface HMDCloudChangeTree : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSMapTable *objectMap;
@property (retain, nonatomic) NSMapTable *recordMap;
@property (retain, nonatomic) NSMapTable *branchMap;
@property (retain, nonatomic) NSSet *validRootUUIDs;
@property (readonly, nonatomic) NSArray *objectsWithPotentialChanges;
@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *orphans;
@property (readonly, nonatomic) NSMutableArray *cloudChanges;
@property (readonly, nonatomic) NSMutableArray *invalidCloudChanges;
@property (readonly, nonatomic) BOOL hasValidChanges;

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)modelTypeCanBeOrphaned:(id)a0;

- (void)removeNode:(id)a0;
- (void)_addNode:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (void)logChangeTreeWithIndent:(id)a0;
- (void)updateRecordMapping:(id)a0;
- (id)_objectForUUID:(id)a0;
- (id)_objectForRecordName:(id)a0;
- (void)_updateNode:(id)a0 oldRecordName:(id)a1;
- (id)_findNodeWithRecordMapping:(id)a0;
- (id)initWithRootUUIDs:(id)a0;
- (id)objectForUUID:(id)a0;
- (id)objectForRecordName:(id)a0;
- (void)updateModel:(id)a0;
- (void)updateChange:(id)a0;
- (void)updateNode:(id)a0 withCloudRecord:(id)a1;
- (void)findAndDeletedChildren;
- (void)findAndMarkOrphanedBranches;
- (id)recordMapWithFilter:(id)a0;

@end
