@class _UISwipeActionPanGestureRecognizer, NSString, _UIStatesFeedbackGenerator, _UISwipeDismissalGestureRecognizer, UISwipeActionController;

@interface _UISwipeHandler : NSObject <UIGestureRecognizerDelegate, _UISwipeDismissalGestureRecognizerDelegate> {
    struct { unsigned char didProcessBegan : 1; } _flags;
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;
    struct { unsigned long long direction; BOOL primaryActionIsDestructive; BOOL primaryActionCanBeTriggeredBySwipe; double openThreshold; double confirmationThreshold; } _currentSwipeConfig;
    BOOL _resetSwipeWhileInitiating;
    double _initialTranslation;
    double _confirmationTranslationAdjustment;
}

@property (weak, nonatomic) UISwipeActionController *swipeController;
@property (readonly, nonatomic) struct { unsigned long long x0; BOOL x1; BOOL x2; double x3; double x4; } currentSwipeConfig;
@property (readonly, nonatomic) unsigned long long currentSwipeState;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isInteracting) BOOL interacting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setUp;
- (void)resetSwipe;
- (BOOL)gestureRecognizerShouldDismissForTouchDown:(id)a0;
- (BOOL)gestureRecognizerShouldDismissForTouchUp:(id)a0;
- (void)_swipeRecognizerBegan:(id)a0;
- (void)_swipeRecognizerEnded:(id)a0 wasCancelled:(BOOL)a1;
- (unsigned long long)_directionForGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_swipeRecognizerDidRecognize:(id)a0;
- (void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)a0;
- (void)dealloc;
- (id)initWithSwipeController:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })_currentSwipeInfoWithTargetOffset:(double)a0 animated:(BOOL)a1 usingSpringWithStiffness:(double)a2;
- (void)_moveSwipedItemToOffset:(double)a0 animated:(BOOL)a1 usingSpringWithStiffness:(double)a2 isTracking:(BOOL)a3;
- (void)_cancelExistingSwipe;
- (BOOL)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)a0;
- (void)initiateSwipeWithDirection:(unsigned long long)a0 configuration:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 userInitiated:(BOOL)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_swipeRecognizerChanged:(id)a0;
- (void)_dismissalRecognizerDidRecognize:(id)a0;

@end
