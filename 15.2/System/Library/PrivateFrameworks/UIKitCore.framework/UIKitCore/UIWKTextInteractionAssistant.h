@class UILongPressGestureRecognizer, NSString, UITextChecker, _UITextServiceSession, UITapGestureRecognizer;
@protocol UITextCursorAssertion;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
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

- (id)textChecker;
- (void)scheduleReplacementsWithOptions:(unsigned long long)a0;
- (void)scrollSelectionToVisible:(BOOL)a0;
- (Class)selectionInteractionClass;
- (id)initWithView:(id)a0;
- (BOOL)usesAsynchronousSelectionController;
- (void)lookup:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x0; double x1; })a0 withSelectionTouch:(long long)a1 withFlags:(long long)a2;
- (void)selectionChanged;
- (void)addGestureRecognizersToView:(id)a0;
- (void)showShareSheetFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)scheduleReplacementsForText:(id)a0;
- (void)updateWithMagnifierTerminalPoint:(BOOL)a0;
- (void)hideTextStyleOptions;
- (BOOL)requiresImmediateUpdate;
- (void)updateActivatingSelectionView;
- (void)rangeSelectionCanceled;
- (BOOL)overrideGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)showTextStyleOptions;
- (BOOL)containerIsBrowserView;
- (long long)currentCursorBehavior;
- (void)showTextServiceFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)selectTextForReplacement:(id)a0 withOptions:(unsigned long long)a1;
- (void)didEndScrollingOverflow;
- (void)scheduleChineseTransliterationForText:(id)a0;
- (void)rangeSelectionEnded:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containerIsAtom;
- (void)translate:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)rangeSelectionMoved:(struct CGPoint { double x0; double x1; })a0 withTouchPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_asText;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showSelectionView;
- (BOOL)shouldTryReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (BOOL)shouldSuppressSelectionCommands;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x0; double x1; })a0 withGesture:(long long)a1 withState:(long long)a2 withFlags:(long long)a3;
- (void)lookup:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)scheduleReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (void)selectAll:(id)a0;
- (BOOL)overrideGestureRecognizerShouldBegin:(id)a0;
- (void)selectWord;
- (void)rangeSelectionStarted:(struct CGPoint { double x0; double x1; })a0;
- (void)showReplacementsForText:(id)a0 withOptions:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)wantsLinkInteraction;
- (BOOL)containerAllowsSelection;
- (void)willChangeSelection;
- (void)willStartScrollingOverflow;
- (BOOL)containerAllowsSelectionTintOnly;
- (void)showDictionaryFor:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
