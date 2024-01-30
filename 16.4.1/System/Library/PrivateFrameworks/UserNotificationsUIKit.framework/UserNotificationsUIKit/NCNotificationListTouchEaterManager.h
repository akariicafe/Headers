@class NSString, PLSwipeInteraction, NCNotificationListSectionHeaderView, NCTouchEaterGestureRecognizer;
@protocol NCNotificationListCoalescingControlsHandler;

@interface NCNotificationListTouchEaterManager : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NCTouchEaterGestureRecognizer *touchEater;
@property (weak, nonatomic) PLSwipeInteraction *swipeInteractionInRevealedState;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInClearState;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isPointInWindowSpace:(struct CGPoint { double x0; double x1; })a0 insideView:(id)a1;
- (void)_handleEatenTouch:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)_handleEatenTouchEndStateForGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initForView:(id)a0;
- (void)_handleEatenTouchBeginStateForGestureRecognizer:(id)a0;
- (void)removeTouchGestureRecognizer;
- (void)setTouchEaterEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
