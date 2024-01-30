@class NSMapTable, HMObjectMergeOperations, NSArray, NSMutableArray;

@interface HMObjectMergeCollection : NSObject

@property (retain, nonatomic) NSMutableArray *currentExistingObjects;
@property (weak, nonatomic) HMObjectMergeOperations *currentOperations;
@property (retain, nonatomic) NSMutableArray *currentAddedObjects;
@property (retain, nonatomic) NSMutableArray *currentRemovedObjects;
@property (retain, nonatomic) NSMutableArray *currentModifiedObjects;
@property (retain, nonatomic) NSMapTable *commonObjectsMaps;
@property (readonly, nonatomic) NSArray *addedObjects;
@property (readonly, nonatomic) NSArray *removedObjects;
@property (readonly, nonatomic) NSArray *modifiedObjects;
@property (readonly, nonatomic) NSArray *existingObjects;
@property (readonly, nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) unsigned long long modifiedCount;

- (void)mergeCommonObjectsNoMergeCount;
- (void)_enumerateObjectRemoveWithBlock:(id /* block */)a0;
- (void)_enumerateObjectAdditionWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)a0;
- (id)init;
- (void)_mergeCommonObjects;
- (id)initWithExistingObjects:(id)a0 newObjects:(id)a1 operations:(id)a2;

@end
