@class NSString;

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsTouchContinuation;

- (BOOL)shouldReceiveEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_scrollingChangedWithEvent:(id)a0;
- (void)endClosed;
- (void)open;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;

@end
