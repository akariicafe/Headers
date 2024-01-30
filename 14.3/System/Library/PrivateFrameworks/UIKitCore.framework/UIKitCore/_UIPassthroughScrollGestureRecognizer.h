@class NSString;

@interface _UIPassthroughScrollGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    struct CGPoint { double x; double y; } _startPoint;
    double _startTime;
}

@property (readonly, nonatomic) unsigned long long endReason;
@property (nonatomic) BOOL endForPrimaryButtonDown;
@property (nonatomic) BOOL endForSecondaryButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsTouchContinuation;

- (id)_window;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)setView:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_endWithReason:(unsigned long long)a0;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
