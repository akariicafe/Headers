@class NSMutableSet;

@interface TSDAllTouchesDoneGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *mTouches;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)p_touchesEndedOrCancelled:(id)a0;

@end
