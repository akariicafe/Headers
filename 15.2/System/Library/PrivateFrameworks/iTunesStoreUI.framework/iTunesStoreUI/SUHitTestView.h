@class NSMutableArray;

@interface SUHitTestView : UIView {
    NSMutableArray *_hitTestTargets;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)removeHitTestTarget:(id)a0;
- (void)addHitTestTarget:(id)a0;

@end
