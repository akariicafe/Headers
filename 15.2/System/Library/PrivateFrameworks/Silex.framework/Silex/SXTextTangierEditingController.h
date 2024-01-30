@interface SXTextTangierEditingController : TSWPEditingController

@property (nonatomic) BOOL startingInitialSelectionDrag;

- (int)canPerformEditorAction:(SEL)a0 withSender:(id)a1;
- (BOOL)wantsCaret;
- (BOOL)wantsKeyboard;
- (BOOL)canAddOrShowComment;
- (BOOL)isParagraphModeWithSelection:(id)a0 onStorage:(id)a1;
- (void)tappedOnKnob:(id)a0;
- (id)editingReps;
- (id)editorKeyboardLanguage;

@end
