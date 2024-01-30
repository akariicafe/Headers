@interface FMFWildcardGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) id /* block */ touchesBeganCallback;
@property (copy, nonatomic) id /* block */ touchesEndedCallback;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)ignoreTouch:(id)a0 forEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
