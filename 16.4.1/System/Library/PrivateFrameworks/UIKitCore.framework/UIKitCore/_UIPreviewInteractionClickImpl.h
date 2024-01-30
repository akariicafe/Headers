@class _UIPreviewInteractionPresentationAssistant, NSString, UIView, _UIPreviewInteractionHighlighter, UIDragInteraction, _UIClickInteraction, UIPreviewInteraction, _UIRelationshipGestureRecognizer;
@protocol UIInteractionEffect, _UIPreviewInteractionTouchForceProviding, UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate;

@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction> {
    unsigned long long _currentState;
    struct { BOOL shouldBegin; BOOL didUpdateCommitTransition; BOOL highlighterForPreviewTransition; BOOL viewControllerPresentationForPresentingViewController; BOOL shouldFinishTransitionToPreview; BOOL targetedPreviewForPreviewingAtLocation; BOOL overrideViewForCommitPhase; } _delegateImplements;
}

@property (readonly, weak, nonatomic) id<UIPreviewInteractionDelegatePrivate> privateDelegate;
@property (retain, nonatomic) _UIClickInteraction *previewClickInteraction;
@property (retain, nonatomic) _UIClickInteraction *commitClickInteraction;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (retain, nonatomic) _UIPreviewInteractionPresentationAssistant *presentationAssistant;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter;
@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
@property (readonly, weak, nonatomic) UIView *view;
@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate;
@property (retain, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;

- (void)_endInteractionEffectIfNeeded;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)cancelInteraction;
- (BOOL)clickInteractionShouldBegin:(id)a0;
- (id)highlightEffectForClickInteraction:(id)a0;
- (void)clickInteractionDidEnd:(id)a0;
- (void)dealloc;
- (void)willMoveToView:(id)a0;
- (void)clickInteractionDidClickUp:(id)a0;
- (void)_prepareInteractionEffect;
- (BOOL)_canPerformPresentation;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (id)_gestureRecognizerForExclusionRelationship;
- (BOOL)_performPresentationIfPossible;
- (void)_startPreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)clickInteractionDidClickDown:(id)a0;
- (id)initWithView:(id)a0 previewInteraction:(id)a1;

@end
