@class NSTimer, NSString, NSArray, NSPredicate, NSSet, NSValueTransformer, NSMutableArray, NSMutableSet, NSIndexSet, NSMutableIndexSet;
@protocol CATCollectionControllerDelegate;

@interface CATCollectionController : NSObject {
    NSMutableArray *mPendingArrangedObjects;
    NSMutableArray *mPendingInsertedObjects;
    NSMutableArray *mPendingDeletedObjects;
    NSMutableSet *mContent;
    id mTarget;
    NSString *mKeyPath;
    NSMutableIndexSet *mChangingSelection;
    BOOL mDelegateKnowsContentIsChanging;
    NSSet *mKeysAffectingArrangement;
    NSMutableSet *mObjectsToRearrange;
    NSTimer *mRearrangeTimer;
    NSValueTransformer *mTransformer;
    id mOriginalObjects;
}

@property (retain) NSArray *arrangedObjects;
@property (weak) id<CATCollectionControllerDelegate> delegate;
@property (copy) NSArray *sortDescriptors;
@property (retain) NSPredicate *filterPredicate;
@property (copy) NSIndexSet *selectionIndexes;
@property BOOL automaticallyRearrangesObjects;
@property (readonly, nonatomic) NSSet *content;
@property (readonly) NSArray *selectedObjects;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObjects:(id)a0;
- (void)removeObject:(id)a0;
- (void)updateObject:(id)a0;
- (void)addObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateKeysAffectingArrangementForceUpdate:(BOOL)a0 includeAllContent:(BOOL)a1;
- (void)unbindContent;
- (void)bindContentToObject:(id)a0 withKeyPath:(id)a1 usingTransformer:(id)a2;
- (void)removeObserversFromObject:(id)a0 forKeyPaths:(id)a1;
- (void)changeContent:(id /* block */)a0;
- (void)scheduleRearrangeTimerIfNeed;
- (void)addObserversToObject:(id)a0 forKeyPaths:(id)a1;
- (void)arrangeObject:(id)a0;
- (void)changeObject:(id)a0 atIndex:(unsigned long long)a1 forChangeType:(unsigned long long)a2 newIndex:(unsigned long long)a3;
- (unsigned long long)newIndexForObject:(id)a0 inArrangedObjects:(id)a1;
- (void)rearrangeTimerDidFire:(id)a0;
- (void)notifyArrangedObjectsWillChange;
- (void)notifyArrangedObjectsDidChangeWithPreviousArrangedObjects:(id)a0;
- (unsigned long long)numberOfArrangedObjects;
- (id)arrangedObjectAtIndex:(unsigned long long)a0;
- (id)arrangedObjectsAtIndexes:(id)a0;
- (void)resolveArrangedObjectsAtIndexes:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)arrangedIndexOfObject:(id)a0;
- (void)bindContentToObject:(id)a0 withKeyPath:(id)a1;
- (void)rearrangeObjects;

@end
