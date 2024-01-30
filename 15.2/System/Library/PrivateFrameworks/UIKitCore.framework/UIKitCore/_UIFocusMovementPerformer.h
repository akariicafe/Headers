@protocol _UIFocusMovementPerformerDelegate;

@interface _UIFocusMovementPerformer : NSObject

@property (weak, nonatomic) id<_UIFocusMovementPerformerDelegate> delegate;

- (id)__findFocusCandidateInContainer:(id)a0 forRequest:(id)a1 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isLoadingScrollableContainer:(BOOL)a3;
- (id)_findFocusCandidateWithoutLoadingScrollableContent:(id)a0 forRequest:(id)a1 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)a0 forRequest:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumSearchAreaForContainer:(id)a0 inWindow:(id)a1 shouldLoadScrollableContainer:(BOOL)a2;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)a0;
- (id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)a0;
- (BOOL)performFocusMovement:(id)a0;
- (void).cxx_destruct;
- (id)_bestCandidateForFocusMovement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumSearchAreaForContainer:(id)a0 inWindow:(id)a1;
- (id)_itemContainersToCheckForRequest:(id)a0;
- (BOOL)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)a0;
- (id)_bestCandidateForLinearFocusMovement:(id)a0;
- (id)_bestCandidateForNonLinearFocusMovement:(id)a0;
- (id)_fakeFocusedViewForFocusMovement:(id)a0 searchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 window:(id)a2;
- (BOOL)_isMovementValidForFocusSequences:(id)a0;
- (id)viewForFocusHeading:(unsigned long long)a0 fromView:(id)a1;

@end
