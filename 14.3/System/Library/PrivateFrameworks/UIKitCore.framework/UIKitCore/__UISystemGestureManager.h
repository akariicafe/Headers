@class FBSDisplayIdentity, NSSet, BKSTouchStream, NSString, NSMutableSet, UIGestureRecognizer, _UISystemGestureWindow;
@protocol BSInvalidatable;

@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate> {
    FBSDisplayIdentity *_rootDisplayIdentity;
    _UISystemGestureWindow *_systemGestureWindow;
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_externalEdgeSwipeGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    id<BSInvalidatable> _stateCaptureToken;
}

@property (retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture;
@property (retain, nonatomic) UIGestureRecognizer *pendingSwipeGesture;
@property (retain, nonatomic) UIGestureRecognizer *catchEdgeSwipeFailureGesture;
@property (retain, nonatomic) UIGestureRecognizer *directTouchGesture;
@property (nonatomic) BOOL achievedMaximumMovement;
@property (nonatomic) BOOL didSeeExclusiveTouchBegan;
@property (nonatomic) BOOL didProcessPendingSwipeBegan;
@property (retain, nonatomic) BKSTouchStream *touchStream;
@property (readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)exclusiveTouchGestureRecognizer:(id)a0 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)a1 timestamp:(double)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)windowForSystemGestures;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)dealloc;
- (void)_failedPendingSwipe;
- (void)addGestureRecognizer:(id)a0 recognitionEvent:(long long)a1;
- (void)_removeInternalGestures;
- (void)_addInternalGesturesToView:(id)a0;
- (void)_externalGestureRecognizerChanged:(id)a0;
- (void)_exclusiveTouchGestureChanged:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithRootDisplayIdentity:(id)a0;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)a0;
- (void)_pendingSwipeGestureChanged:(id)a0;
- (void)_exclusiveTouchGestureDidTerminate:(id)a0;
- (void)_directTouchDown:(id)a0;
- (void)clearTransform;
- (void)_catchSwipeFailureGestureChanged:(id)a0;
- (void)_pendingSwipeGestureDidBegin:(id)a0;
- (void)_pendingSwipeGestureDidTerminate:(id)a0;

@end
