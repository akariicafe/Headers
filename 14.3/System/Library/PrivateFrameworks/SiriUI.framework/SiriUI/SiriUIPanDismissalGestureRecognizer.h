@class NSString;
@protocol SiriUIPanDismissalGestureRecognizerDelegate;

@interface SiriUIPanDismissalGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<SiriUIPanDismissalGestureRecognizerDelegate> dismissalDelegate;
@property (nonatomic) long long dismissalStyle;
@property (nonatomic) struct CGPoint { double x; double y; } initialPosition;
@property (nonatomic) long long initialDirection;
@property (copy, nonatomic) id /* block */ rtlProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)panGestureRecognizerDidPan:(id)a0;
- (id)initWithDismissalDelegate:(id)a0 dismissalStyle:(long long)a1;
- (void)_handlePanWithRubberBandDownDismissUp:(id)a0 requiredDirection:(long long)a1;
- (void)_handlePanWithRubberBandUpDownDismissTrailing:(id)a0 requiredDirection:(long long)a1;
- (void)_updatePanGestureRecognizer:(id)a0 changedAnimations:(id /* block */)a1 endAnimations:(id /* block */)a2;
- (id)initWithDismissalDelegate:(id)a0 dismissalStyle:(long long)a1 rtlProvider:(id /* block */)a2;

@end
