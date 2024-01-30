@class NSString, _UIPassthroughGateGestureRecognizer, UIView, _UIPassthroughScrollGestureRecognizer;
@protocol _UIPassthroughScrollInteractionDelegate;

@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction>

@property (readonly, nonatomic) UIView *_touchFallbackView;
@property (readonly, nonatomic) _UIPassthroughScrollGestureRecognizer *_passthroughScrollGestureRecognizer;
@property (readonly, nonatomic) _UIPassthroughGateGestureRecognizer *_gestureGate;
@property (weak, nonatomic) id<_UIPassthroughScrollInteractionDelegate> delegate;
@property (nonatomic) BOOL recognizeOnPrimaryButtonDown;
@property (nonatomic) BOOL recognizeOnSecondaryButtonDown;
@property (nonatomic) BOOL eatsTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (BOOL)_isPassthroughGestureRecognizer:(id)a0;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)_tearDown;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_shouldEventBePassedThrough:(id)a0;
- (void)__forciblyEndWithReason:(unsigned long long)a0;
- (void)_updateGesturesEatTouches;
- (void)_setUpForWindow:(id)a0;
- (void)_handlePassthroughRecognizer:(id)a0;
- (BOOL)_delegateShouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;

@end
