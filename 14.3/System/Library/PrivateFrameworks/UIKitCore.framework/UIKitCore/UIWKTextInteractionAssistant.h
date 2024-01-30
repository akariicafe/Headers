@class UILongPressGestureRecognizer, NSString, UITextChecker, _UITextServiceSession, UITapGestureRecognizer;
@protocol UITextCursorAssertion;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextChecker *_textChecker;
    unsigned long long _options;
    id<UITextCursorAssertion> _blinkAssertion;
}

@property (retain, nonatomic) NSString *wordBeforeTap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } caretBeforeTap;
@property (nonatomic) BOOL hadCaretSelectionBeforeTap;
@property (readonly, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (readonly, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property (readonly, nonatomic) UILongPressGestureRecognizer *forcePressGesture;
@property (nonatomic) BOOL shouldDelayActivatingSelectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectAll:(id)a0;
- (void)scrollSelectionToVisible:(BOOL)a0;
- (void)addGestureRecognizersToView:(id)a0;
- (Class)selectionInteractionClass;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)requiresImmediateUpdate;
- (BOOL)shouldTryReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (id)initWithView:(id)a0;
- (void)lookup:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)wantsLinkInteraction;
- (void)rangeSelectionStarted:(struct CGPoint { double x0; double x1; })a0;
- (void)didEndScrollingOverflow;
- (void)dealloc;
- (id)_asText;
- (void)scheduleChineseTransliterationForText:(id)a0;
- (void)selectTextForReplacement:(id)a0 withOptions:(unsigned long long)a1;
- (void)updateActivatingSelectionView;
- (void)rangeSelectionEnded:(struct CGPoint { double x0; double x1; })a0;
- (void)lookup:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)containerAllowsSelectionTintOnly;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x0; double x1; })a0 withGesture:(long long)a1 withState:(long long)a2 withFlags:(long long)a3;
- (long long)currentCursorBehavior;
- (BOOL)usesAsynchronousSelectionController;
- (BOOL)overrideGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)showShareSheetFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)selectWord;
- (void)showDictionaryFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldSuppressSelectionCommands;
- (void)showTextStyleOptions;
- (void)selectionChanged;
- (void)willChangeSelection;
- (void)scheduleReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (void)rangeSelectionCanceled;
- (void)showSelectionView;
- (BOOL)containerIsAtom;
- (void)showTextServiceFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)hideTextStyleOptions;
- (void)scheduleReplacementsForText:(id)a0;
- (void)showReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)containerIsBrowserView;
- (void)willStartScrollingOverflow;
- (void)rangeSelectionMoved:(struct CGPoint { double x0; double x1; })a0 withTouchPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)scheduleReplacementsWithOptions:(unsigned long long)a0;
- (BOOL)overrideGestureRecognizerShouldBegin:(id)a0;
- (BOOL)containerAllowsSelection;
- (void)updateWithMagnifierTerminalPoint:(BOOL)a0;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x0; double x1; })a0 withSelectionTouch:(long long)a1 withFlags:(long long)a2;

@end
