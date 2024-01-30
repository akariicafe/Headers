@class NSString;
@protocol SiriSharedUIPanDismissalGestureRecognizerDelegate;

@interface SiriSharedUIPanDismissalGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<SiriSharedUIPanDismissalGestureRecognizerDelegate> dismissalDelegate;
@property (nonatomic) long long dismissalStyle;
@property (nonatomic) struct CGPoint { double x; double y; } initialPosition;
@property (nonatomic) long long initialDirection;
@property (copy, nonatomic) id /* block */ rtlProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (double)_contentScaleFactor;
- (void)_handlePanWithRubberBandDownDismissUp:(id)a0 requiredDirection:(long long)a1;
- (void)_handlePanWithRubberBandUpDownDismissTrailing:(id)a0 requiredDirection:(long long)a1;
- (void)_preventHighlightingUntilGestureFaills;
- (void)_runAnimationsWithPreferredStyle:(id /* block */)a0;
- (void)_updatePanGestureRecognizer:(id)a0 changedAnimations:(id /* block */)a1 endAnimations:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_windowBounds;
- (id)initWithDismissalDelegate:(id)a0 dismissalStyle:(long long)a1;
- (id)initWithDismissalDelegate:(id)a0 dismissalStyle:(long long)a1 rtlProvider:(id /* block */)a2;
- (void)panGestureRecognizerDidPan:(id)a0;

@end
