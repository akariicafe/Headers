@class AXPIFingerContainerView, UIWindow, NSString, AXPIFingerEventSender, NSMutableDictionary, AXAssertionCoordinator, NSMutableArray;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerController : NSObject <AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate> {
    AXPIFingerEventSender *_eventSender;
    unsigned long long _updateCount;
    NSMutableDictionary *_downInfosByIdentifier;
    NSMutableDictionary *_upInfosByIdentifier;
    BOOL _didMoveFingersDuringUpdate;
    id /* block */ _gestureCompletion;
}

@property (readonly, nonatomic) AXAssertionCoordinator *suppressVisualsAssertionCoodinator;
@property (readonly, nonatomic) AXPIFingerContainerView *fingerContainerView;
@property (readonly, nonatomic) BOOL isPinchEnabled;
@property (readonly, nonatomic) NSMutableArray *fingerModels;
@property (readonly, nonatomic) unsigned long long numberOfFingers;
@property (nonatomic) BOOL shouldAddRealEventFlag;
@property (nonatomic) unsigned long long senderID;
@property (readonly, nonatomic) BOOL isPerformingGesture;
@property (weak, nonatomic) id<AXPIFingerAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIWindow *fixedReferenceWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endUpdates;
- (void)assertionCoordinator:(id)a0 assertionsDidBecomeActive:(BOOL)a1;
- (BOOL)_isInUpdateBlock;
- (void).cxx_destruct;
- (void)beginUpdates;
- (id)init;
- (void)cancelGesture;
- (void)dealloc;
- (void)performGesture:(id)a0 completion:(id /* block */)a1;
- (void)performGesture:(id)a0;
- (void)didUpdatePressStateForFingerModel:(id)a0;
- (void)didUpdateSelectedStateForFingerModel:(id)a0;
- (void)didUpdateLocationForFingerModel:(id)a0;
- (void)didUpdateForceForFingerModel:(id)a0;
- (void)didUpdateShapeForFingerModel:(id)a0;
- (void)liftFingersUpAnimated:(BOOL)a0;
- (void)_interruptGestureIfNeeded;
- (void)enumerateFingersUsingBlock:(id /* block */)a0;
- (void)clearAllFingersAnimated:(BOOL)a0 endPointForAnimation:(struct CGPoint { double x0; double x1; })a1;
- (void)_showFingerModels:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2 shouldShowPinchChain:(BOOL)a3 shouldReuseFingers:(BOOL)a4;
- (struct CGPoint { double x0; double x1; })midpointForFingers;
- (struct CGPoint { double x0; double x1; })_sceneReferencePointFromFingerLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_eventTouchInfoForFingerLocation:(struct CGPoint { double x0; double x1; })a0 force:(double)a1;
- (id)_eventTouchInfoForFinger:(id)a0;
- (void)pressFingersDownAnimated:(BOOL)a0 sendTouchEvents:(BOOL)a1;
- (void)liftFingersUpAnimated:(BOOL)a0 sendTouchEvents:(BOOL)a1;
- (void)cancelCircularProgressAnimation;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)a0 completion:(id /* block */)a1;
- (id)_handleStartingFingersForGesture:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2 midpoint:(struct CGPoint { double x0; double x1; } *)a3 showFingers:(BOOL)a4;
- (struct CGPoint { double x0; double x1; })_fingerLocationFromSceneReferencePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showStartingFingersForGesture:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2;
- (id)_showStartingFingersForGesture:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2;
- (void)_performGesture:(id)a0 shouldShowFingers:(BOOL)a1 completion:(id /* block */)a2;
- (void)_replayEventAtIndex:(unsigned long long)a0 inGesture:(id)a1 allFingerIdentifiers:(id)a2;
- (void)_endGestureWithSuccess:(BOOL)a0;
- (void)pressFingersDownAnimated:(BOOL)a0;
- (id)_pointStringsFromFingers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFingersAtPoints:(id)a0;
- (void)animateToTapWithDuration:(double)a0;
- (id)_touchInfosByIdentifierForPressedFingers;
- (void)_sendMoveEventIfNeededForFingerModel:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_fingerIdentifierForIndex:(unsigned long long)a0;
- (void)showFingerModels:(id)a0 animated:(BOOL)a1 startPointForAnimation:(struct CGPoint { double x0; double x1; })a2;
- (void)showPinchFingersAnimated:(BOOL)a0 midpoint:(struct CGPoint { double x0; double x1; })a1;
- (void)resetPinchFingers;
- (struct CGPoint { double x0; double x1; })midpointOfStartingFingersForGesture:(id)a0;
- (void)showStartingFingersForGesture:(id)a0;
- (void)performWithoutPreparingGesture:(id)a0 completion:(id /* block */)a1;
- (id)fingerModelAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)acquireAssertionToSuppressVisualsWithReason:(id)a0;
- (id)legacyPressFingersDown;
- (id)legacyLiftFingersUp;
- (BOOL)moveFingersToPoints:(id)a0;
- (void)performDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performMoveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)performUpAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
