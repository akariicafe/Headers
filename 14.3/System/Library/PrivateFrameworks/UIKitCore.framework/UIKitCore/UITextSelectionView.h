@class UITextInteractionAssistant, NSArray, UITextSelection, UIView, CAKeyframeAnimation, UITextRangeView;

@interface UITextSelectionView : UIView {
    UITextSelection *m_selection;
    UITextRangeView *m_rangeView;
    BOOL m_caretShowingNow;
    BOOL m_caretAnimating;
    BOOL m_ghostApperarance;
    BOOL m_caretVisible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    BOOL m_shouldEmphasizeNextSelectionRects;
    int m_showingCommandsCounter;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver { } *m_observer;
    BOOL m_activeCaret;
    BOOL m_isSuspended;
    int m_showingCommandsCounterForRotate;
    unsigned long long _activeGrabberSuppressionAssertions;
    CAKeyframeAnimation *_caretBlinkAnimation;
    id _floatingCaretBlinkAssertion;
}

@property (readonly, nonatomic) UIView *caretView;
@property (readonly, nonatomic) UIView *floatingCaretView;
@property (readonly, nonatomic) UITextRangeView *rangeView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stashedCaretRect;
@property (nonatomic) BOOL isIndirectFloatingCaret;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousGhostCaretRect;
@property (readonly, weak, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (readonly, nonatomic) UITextSelection *selection;
@property (nonatomic) BOOL caretBlinks;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL forceRangeView;
@property (readonly, nonatomic) BOOL selectionCommandsShowing;
@property (retain, nonatomic) NSArray *replacements;
@property (readonly, nonatomic) BOOL isInstalledInSelectionContainerView;
@property (nonatomic) BOOL caretVisible;
@property (nonatomic) BOOL ghostAppearance;

- (void)showSelectionCommands;
- (void)detach;
- (id)_customSelectionContainerView;
- (void)wilLResume:(id)a0;
- (void)didSuspend:(id)a0;
- (id)ghostCaretViewColor;
- (void)updateSelectionCommands;
- (void)updateRangeViewForSelectionMode;
- (void)updateSelectionRectsIfNeeded;
- (void)animateBoxShrinkOn:(id)a0;
- (BOOL)activeCaret;
- (void)selectionDidScroll:(id)a0;
- (void)endFloatingCursor;
- (void)setEmphasisOnNextSelectionRects;
- (void)beginFloatingCaretView;
- (id)scrollView;
- (void)tintColorDidChange;
- (void)willBeginFloatingCursor:(BOOL)a0;
- (void)animateExpanderOn:(id)a0;
- (void)updateDocumentHasContent:(BOOL)a0;
- (void)showInitialCaret;
- (void)windowDidResignOrBecomeKey;
- (void).cxx_destruct;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)inputViewDidAnimate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippedTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deactivateAndCollapseSelection:(BOOL)a0;
- (void)textSelectionViewActivated:(id)a0;
- (void)doneMagnifying;
- (void)releaseGrabberHandleSuppressionAssertion:(id)a0;
- (void)configureForHighlightMode;
- (id)floatingCaretViewColor;
- (void)dealloc;
- (void)_showCommandsWithReplacements:(id)a0 forDictation:(BOOL)a1 afterDelay:(double)a2;
- (void)removeFromSuperview;
- (id)dynamicCaret;
- (void)_showCommandsWithReplacements:(id)a0 isForContextMenu:(BOOL)a1 forDictation:(BOOL)a2 rectsToEvade:(id)a3;
- (id)obtainGrabberSuppressionAssertion;
- (void)inputModeDidChange:(id)a0;
- (void)viewAnimate:(id)a0;
- (void)configureForPencilHighlightMode;
- (void)inputViewWillMove:(id)a0;
- (void)_setCaretBlinkAnimationEnabled:(BOOL)a0;
- (void)showCommandsWithReplacements:(id)a0;
- (void)cancelDelayedCommandRequests;
- (void)prepareForMagnification;
- (void)validateWithInteractionAssistant:(id)a0;
- (void)endFloatingCaretView;
- (BOOL)isValid;
- (void)inputViewDidChange;
- (void)willRotate:(id)a0;
- (void)appearOrFadeIfNecessary;
- (BOOL)shouldBeVisible;
- (BOOL)point:(struct CGPoint { double x0; double x1; })a0 isNearCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didRotate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)deferredUpdateSelectionRects;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldUseIndirectFloatingCaret;
- (void)updateSelectionDots;
- (void)hideSelectionCommandsAfterDelay:(double)a0;
- (struct CGPoint { double x0; double x1; })floatingCursorPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)activate;
- (void)clearRangeAnimated:(BOOL)a0;
- (void)selectionWillTranslateForReachability:(id)a0;
- (void)_showCaret:(int)a0;
- (void)hideCaret:(int)a0;
- (void)scaleWillChange:(id)a0;
- (void)animateCaret:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (void)animatePulsingDirectCaret:(id)a0;
- (BOOL)updateCalloutBarRects:(id)a0 effectsWindow:(id)a1 rectsToEvade:(id)a2;
- (void)inputViewWillAnimate;
- (void)showSelectionCommandsAfterDelay:(double)a0;
- (void)selectionChanged;
- (void)_hideCaret:(int)a0;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)hideSelectionCommands;
- (id)dynamicCaretList;
- (void)layoutChangedByScrolling:(BOOL)a0;
- (id)initWithInteractionAssistant:(id)a0;
- (void)configureForSelectionMode;
- (void)selectionWillScroll:(id)a0;
- (void)selectionDidTranslateForReachability:(id)a0;
- (void)animatePulsingIndirectCaret:(id)a0;
- (void)inputViewDidMove;
- (void)configureForPencilDeletionPreviewMode;
- (void)scaleDidChange:(id)a0;
- (BOOL)shouldSuppressSelectionHandles;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)deferredUpdateSelectionCommands;
- (void)showReplacementsWithGenerator:(id)a0 forDictation:(BOOL)a1 afterDelay:(double)a2;
- (void)configureForReplacementMode;
- (void)showCaret:(int)a0;
- (void)calculateReplacementsWithGenerator:(id)a0 andShowAfterDelay:(double)a1;
- (id)_actingParentViewForGestureRecognizers;
- (void)deactivate;
- (void)updateSelectionRects;
- (BOOL)affectedByScrollerNotification:(id)a0;
- (void)clearCaret;
- (void)showCalloutBarAfterDelay:(double)a0;
- (void)invalidate;
- (id)caretViewColor;
- (void)inputViewWillChange;
- (void)_showSelectionCommandsForContextMenu:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBoundingBox;
- (void)installIfNecessary;

@end
