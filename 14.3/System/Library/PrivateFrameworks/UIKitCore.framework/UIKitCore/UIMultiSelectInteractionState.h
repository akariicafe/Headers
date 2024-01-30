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

- (id)pathsToDeselectForInterpolatedIndexPaths:(id)a0 currentlySelectedIndexPaths:(id)a1;
- (void).cxx_destruct;
- (void)ignoreSelectionChangedNotificationsWithBlock:(id /* block */)a0;
- (id)pathsToSelectForInterpolatedIndexPaths:(id)a0;
- (id)initWithCurrentSelection:(id)a0;
- (void)updateStateWithDifferenceFromCurrentSelection:(id)a0;
- (void)updateStateWithStartingIndexPath:(id)a0 otherSelectedIndexPaths:(id)a1;
- (BOOL)stillValidForSelectedIndexPaths:(id)a0;

@end
