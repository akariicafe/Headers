@class NSMutableSet;

@interface TSDAllTouchesDoneGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *mTouches;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)p_touchesEndedOrCancelled:(id)a0;

@end
