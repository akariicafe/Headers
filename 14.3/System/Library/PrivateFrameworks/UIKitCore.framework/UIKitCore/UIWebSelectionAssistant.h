@class UIView, NSString, UIWebSelection, UIWebSelectionView, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController, UIKeyboardTaskQueue;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant> {
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UITextInteraction *_textInteractions;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    BOOL _enabled;
}

@property (readonly, nonatomic) UIWebSelection *selection;
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) UIWebSelectionView *selectionView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionFrame;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *forcePressGestureRecognizer;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;

- (void)showSelectionCommands;
- (void)tap:(id)a0;
- (void)clearSelection;
- (void)scrollSelectionToVisible:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)addGestureRecognizersToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithView:(id)a0;
- (id)scrollView;
- (void)didEndScrollingOverflow;
- (void)configureForHighlightMode;
- (void)dealloc;
- (void)willBeginGesture;
- (void)hideCallout;
- (void)initializeSelectionView;
- (void)makeWebSelection:(id)a0;
- (void)scaleChanged;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)a0;
- (void)addSelectionViewIfNeeded;
- (void)willStartScrollingOrZoomingPage;
- (void)didEndScrollingOrZoomingPage;
- (BOOL)isSelectionGestureRecognizer:(id)a0;
- (void)_addOneFingerForceGestures:(id)a0 toView:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 fromView:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSelectionRects:(BOOL)a0;
- (void)rangedMagnifierWithState:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)willRotate:(id)a0;
- (BOOL)shouldAllowSelectionGestures:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (void)didRotate:(id)a0;
- (void)selectionChanged;
- (void)layoutChangedByScrolling:(BOOL)a0;
- (void)resignedFirstResponder;
- (void)configureForSelectionMode;
- (void)willStartScrollingOverflow;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setGestureRecognizers;

@end
