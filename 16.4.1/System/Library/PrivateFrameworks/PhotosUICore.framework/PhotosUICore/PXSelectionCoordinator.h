@class PXSectionedSelectionManager, NSMapTable, NSOrderedSet, NSMutableOrderedSet, NSString, NSNumber;
@protocol PXSelectionCoordinatorDelegate;

@interface PXSelectionCoordinator : NSObject <PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator> {
    PXSectionedSelectionManager *_currentlyMutatingSelectionManager;
    long long _currentlyMutatingObservationCount;
    struct { BOOL willUpdateSelectedObjects; BOOL didUpdateSelectedObjects; BOOL rejectedCountLimitViolation; BOOL selectionLimitStatusChanged; } _delegateRespondsTo;
}

@property (readonly, nonatomic) NSMutableOrderedSet *mutableSelectedObjectIDs;
@property (readonly, nonatomic) NSMapTable *stateByManager;
@property (nonatomic) BOOL selectionLimitReached;
@property (retain, nonatomic) NSNumber *selectionCountLimit;
@property (readonly, nonatomic) NSOrderedSet *selectedObjectIDs;
@property (weak, nonatomic) id<PXSelectionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)selectionManager:(id)a0 validateSnapshot:(id)a1;
- (id)init;
- (BOOL)selectionManagerShouldAvoidEmptySelection:(id)a0;
- (void).cxx_destruct;
- (void)_startMutatingSelectionManager:(id)a0;
- (void)_handleDataSourceChangeToSelectionManager:(id)a0 state:(id)a1;
- (void)_handleSelectionChangeToSelectionManager:(id)a0 state:(id)a1;
- (void)_modifySelectionWithRemovedOIDs:(id)a0 insertedOIDs:(id)a1 originatingSelectionManager:(id)a2;
- (void)_performChangesToCoordinatedSelectionManagersWithRemovedOIDs:(id)a0 insertedOIDs:(id)a1 originatingSelectionManager:(id)a2;
- (void)_stopMutatingSelectionManager:(id)a0;
- (void)_updateSelectionLimitReached;
- (void)_updateSelectionManagerToGlobalState:(id)a0 managerState:(id)a1;
- (void)checkInSelectionManager:(id)a0;
- (id)checkOutSelectionManagerForDataSourceManager:(id)a0;
- (id)initWithSelectedOIDs:(id)a0;
- (void)modifySelectionWithOrder:(id)a0;
- (BOOL)modifySelectionWithRemovedOIDs:(id)a0 insertedOIDs:(id)a1;
- (BOOL)test_validateInternalState;

@end
