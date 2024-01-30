@class NSArray, NSIndexPath;

@interface UIMultiSelectInteractionState : NSObject {
    unsigned long long _ignoringSelectionChangedNotificationsCounter;
}

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) NSIndexPath *startIndexPath;
@property (retain, nonatomic) NSIndexPath *endIndexPath;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (copy, nonatomic) NSArray *originallySelectedIndexPaths;
@property (copy, nonatomic) NSArray *allSelectedIndexPaths;
@property (readonly, nonatomic) BOOL ignoringSelectionChangedNotifications;

- (void)beginSelectingWithStartingIndexPath:(id)a0 otherSelectedIndexPaths:(id)a1 keepCurrentSelection:(BOOL)a2;
- (id)pathsToDeselectForInterpolatedIndexPaths:(id)a0 currentlySelectedIndexPaths:(id)a1;
- (void)updateStateWithStartingIndexPath:(id)a0 otherSelectedIndexPaths:(id)a1;
- (id)initWithCurrentSelection:(id)a0;
- (void)ignoreSelectionChangedNotificationsWithBlock:(id /* block */)a0;
- (id)pathsToSelectForInterpolatedIndexPaths:(id)a0;
- (void)updateStateWithDifferenceFromCurrentSelection:(id)a0;
- (BOOL)stillValidForSelectedIndexPaths:(id)a0;
- (void).cxx_destruct;

@end
