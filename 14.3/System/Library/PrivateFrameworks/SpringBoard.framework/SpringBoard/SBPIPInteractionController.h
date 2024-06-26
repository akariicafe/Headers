@class UIView, UIRotationGestureRecognizer, NSString, NSArray, UIPinchGestureRecognizer, _UIHyperInteractor, SBPIPInteractionSettings, UIPanGestureRecognizer, _UIHyperregionUnion, UIViewFloatAnimatableProperty;
@protocol SBPIPInteractionControllerDelegate, BSInvalidatable;

@interface SBPIPInteractionController : NSObject <UIGestureRecognizerDelegate, PTSettingsKeyPathObserver> {
    id<SBPIPInteractionControllerDelegate> _delegate;
    UIView *_interactionTargetView;
    BOOL _didHandleGestureEndState;
    BOOL _gesturesWereCancelled;
    BOOL _isChangingSize;
    BOOL _stashed;
    BOOL _threeTouchesPanDetected;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nonoperationalFrame;
    struct CGSize { double width; double height; } _toBeAppliedPreferredContentSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _minimumPadding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _stashedMinimumPadding;
    UIViewFloatAnimatableProperty *_layoutProgressProperty;
    unsigned long long _allLayoutSessionUpdateReasons;
    unsigned long long _gesturesEndedLayoutReason;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSArray *_steadyStateCorners;
    _UIHyperregionUnion *_steadyStateStashedRegions;
    _UIHyperInteractor *_positionInteractor;
    _UIHyperInteractor *_rotationInteractor;
    _UIHyperInteractor *_scaleInteractor;
    double _pinchGestureBaselineScale;
    double _pinchGestureScaleFactor;
    double _lastStashedProgress;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGPoint { double x; double y; } _panInitialLocationInView;
    struct CGPoint { double x; double y; } _positionAnchorPointOffset;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _stashTabCompensationTransform;
    unsigned long long _inFlightAnimatedLayouts;
    SBPIPInteractionSettings *_settings;
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double preferredScale;
@property (readonly, nonatomic) double stashProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isRotating;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isPinching;
- (void)_updatePreferredContentSize;
- (double)_currentRotation;
- (double)_currentScale;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void)_setupStateCapture;
- (BOOL)_isPanning;
- (struct CGPoint { double x0; double x1; })_currentPosition;
- (BOOL)_isInteractive;
- (void)handlePinchGesture:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)_setupGestureRecognizers;
- (void)_removeGestureRecognizers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrame;
- (void)_setDefaults;
- (void)setStashed:(BOOL)a0;
- (double)currentScale;
- (void)_setupDefaultInteractorsAndHyperRegions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_setupForInitialFrame;
- (struct CGPoint { double x0; double x1; })_currentPositionForLayoutReason:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_currentSizeForLayoutReason:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_lastSteadySize;
- (BOOL)_hasValidInteractionTargetView;
- (void)_updateInteractorsAndCommit:(BOOL)a0;
- (void)handleRotationGesture:(id)a0;
- (void)_updateSettingsDrivenParameters;
- (void)_setNeedsLayoutForTraits:(unsigned long long)a0 withReason:(unsigned long long)a1 behavior:(int)a2;
- (struct CGPoint { double x0; double x1; })_currentCornerPosition;
- (id)__cornersForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setNeedsLayoutForTraits:(unsigned long long)a0 withReason:(unsigned long long)a1 behavior:(int)a2 layoutCompletion:(id /* block */)a3 interactionCompletion:(id /* block */)a4;
- (void)_setPreferredNormalizedScale:(double)a0 animationBehavior:(int)a1;
- (void)_setPreferredScale:(double)a0 animationBehavior:(int)a1;
- (void)_applyPreferredScale;
- (void)_cancelAllGestures;
- (BOOL)_hasInFlightLayoutAnimations;
- (void)_performInitialLayoutIfNeeded;
- (BOOL)_isGesturing;
- (unsigned long long)_canonicalPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isPreferredContentSizeDirty;
- (void)_noteStashProgress:(double)a0 withReason:(unsigned long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_stashTabCompensationTransformForStashProgress:(double)a0 reason:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })_roundPosition:(struct CGPoint { double x0; double x1; })a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (double)_stashProgressForPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)__moveToAnchorPoint:(struct CGPoint { double x0; double x1; })a0 reason:(id)a1;
- (void)_handleGestureBeganState:(id)a0;
- (void)_handleGestureEndedState:(id)a0;
- (void)_adjustContentViewAnchorPointForGestureRecognizer:(id)a0;
- (void)__handleGesturesEndedState:(id)a0;
- (void)_resetAnchorPoint;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inFlightHitTestPadding;
- (unsigned long long)__traitsForGesturesReasons:(unsigned long long)a0;
- (void)_setNeedsLayoutForTraits:(unsigned long long)a0 withReason:(unsigned long long)a1 behavior:(int)a2 completion:(id /* block */)a3;
- (BOOL)_isSizeAffectedByLayoutReasons:(unsigned long long)a0;
- (void)_sizeChangeBeganWithBehavior:(int)a0;
- (void)_sizeChangeEnded;
- (BOOL)_isGestureRecognizerRecognizing:(id)a0;
- (id)_scaleHyperregion;
- (id)_rotationHyperregion;
- (unsigned long long)canonicalPosition;
- (id)_positionHyperregionUnion;
- (id)__interactivePositionHyperregionForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)__stashedRegionsForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)__steadyPositionHyperregionWithCorners:(id)a0 stashedRegions:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__validatedInteractiveOrStashedInsetRectForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__validatedSteadyOnScreenInsetRectForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__insetRectForEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 pipSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithInteractionTargetView:(id)a0 delegate:(id)a1 preferredContentSize:(struct CGSize { double x0; double x1; })a2;
- (void)toggleUserPreferredScale;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0 withOrientation:(long long)a1;
- (void)layoutInteractedTraits:(unsigned long long)a0 withReason:(unsigned long long)a1 source:(id)a2;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reason:(id)a1 source:(id)a2;

@end
