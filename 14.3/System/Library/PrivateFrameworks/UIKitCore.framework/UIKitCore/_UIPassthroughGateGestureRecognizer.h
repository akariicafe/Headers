@class NSString;

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsTouchContinuation;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)endClosed;
- (void)open;
- (void)_scrollingChangedWithEvent:(id)a0;

@end
