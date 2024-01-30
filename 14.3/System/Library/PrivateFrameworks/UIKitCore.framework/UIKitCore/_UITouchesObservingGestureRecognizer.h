@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) NSSet *touches;

+ (BOOL)_shouldDefaultToTouches;

- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (BOOL)_allTouchesAreEndedOrCancelled:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)_wantsPartialTouchSequences;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)_updateTouchesFromEvent:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
