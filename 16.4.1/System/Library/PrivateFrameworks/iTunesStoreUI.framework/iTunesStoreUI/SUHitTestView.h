@class NSMutableArray;

@interface SUHitTestView : UIView {
    NSMutableArray *_hitTestTargets;
}

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addHitTestTarget:(id)a0;
- (void)removeHitTestTarget:(id)a0;

@end
