@class UIImageView, NSMutableArray;

@interface BKUIPearlPillContainerView : UIView {
    NSMutableArray *_pillViews;
    UIImageView *_successAnimation;
    long long _numberOfVisiblePillViews;
    long long _clockwise;
    long long _counterwise;
    long long _lastAngle;
    BOOL _hasPillStateStash;
    unsigned long long _stashedPillStates[120];
}

@property (nonatomic) int state;
@property (nonatomic) struct CGPoint { double x; double y; } enrollViewCenter;
@property (readonly, nonatomic) double radius;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetPillsAnimated:(BOOL)a0;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)setAllPillState:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)unstashPillStatesAnimated:(BOOL)a0;
- (long long)_indexForPillAtAngle:(double)a0;
- (BOOL)fillPillsAroundAngle:(double)a0 forTutorial:(BOOL)a1;
- (void)_animateToFirstEnrollFinishedCompletion:(id /* block */)a0;
- (void)_animateToSecondEnrollInProgressCompletion:(id /* block */)a0;
- (void)_animateToSecondEnrollFinishedCompletion:(id /* block */)a0;
- (void)_animateToFinishedCompletion:(id /* block */)a0;
- (double)percentOfPillsCompleted;
- (void)stashPillStates;
- (BOOL)unstashPillStatesIfNeededAnimated:(BOOL)a0;
- (BOOL)fillPillsAroundAngle:(double)a0;
- (id)unfilledDirections;
- (void)setRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)animateToState:(int)a0 completion:(id /* block */)a1;

@end
