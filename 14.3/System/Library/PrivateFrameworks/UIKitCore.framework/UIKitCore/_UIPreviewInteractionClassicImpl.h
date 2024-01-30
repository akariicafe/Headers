@class UIView, _UIStatesFeedbackGenerator, NSString, CADisplayLink, _UIPreviewInteractionStateRecognizer, UIPreviewInteraction, _UIDeepPressAnalyzer, _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerHelper;
@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@interface _UIPreviewInteractionClassicImpl : NSObject <_UIPreviewInteractionImpl> {
    struct { unsigned char delegatePreviewInteractionShouldBegin : 1; unsigned char delegateDidUpdateCommitTransition : 1; unsigned char delegateShouldFinishTransitionToPreview : 1; unsigned char delegateShouldAutomaticallyTransitionToPreviewAfterDelay : 1; unsigned char delegateHighlighterForPreviewTransition : 1; unsigned char delegateViewControllerPresentationForPresentingViewController : 1; unsigned char interactive : 1; unsigned char delegateDidPreventInteraction : 1; unsigned char interactionRequiresRestart : 1; unsigned char interactionWasCancelled : 1; unsigned char previousProgressWasNegativeOrZero : 1; unsigned char currentState : 3; unsigned char nextUpdateShouldTransitionToPreview : 1; unsigned char nextPreviewShouldPreventHapticFeedback : 1; } _previewInteractionFlags;
    id<_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    struct CGPoint { double x; double y; } _sceneReferenceLocationFromLatestUpdate;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    BOOL _feedbackGeneratorTurnedOn;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerHelper *_viewControllerHelper;
    id _viewControllerPresentationObserver;
}

@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (retain, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelInteraction;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateForContinuousEvaluation:(id)a0;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_updateHighlighter:(double)a0;
- (void)_prepareUsingFeedback;
- (void)_endContinuousEvaluation;
- (void)_endHighlightingIfNeeded;
- (void)_endInteractionIfNeeded;
- (void)_updateForCurrentTouchForceProvider;
- (void)_prepareForInteractionIfNeeded;
- (void)_endUsingFeedbackIfNeeded;
- (void)_endViewControllerPresentationObserving;
- (void)_prepareHighlighterIfNeeded;
- (void)_prepareUsingFeedbackIfNeeded;
- (BOOL)_shouldCancelTransitionToState:(long long)a0;
- (void)_actuateFeedbackForStateIfNeeded:(long long)a0;
- (void)_endInteractiveStateTransitions;
- (void)_presentPreviewViewControllerIfNeeded;
- (void)_resetAfterInteraction;
- (void)_updateFeedbackTowardNextState:(long long)a0 progress:(double)a1;
- (void)_prepareForViewControllerPresentationObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithView:(id)a0 previewInteraction:(id)a1;
- (void)_startPreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_turnOnFeedbackGenerator;
- (void)_turnOffFeedbackGenerator;

@end
