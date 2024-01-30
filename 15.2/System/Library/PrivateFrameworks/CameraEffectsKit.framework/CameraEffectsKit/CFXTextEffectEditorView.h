@class NSString, JFXTextEffectEditorView;
@protocol CFXTextEffectEditorViewDelegate;

@interface CFXTextEffectEditorView : UIView <UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate, JFXTextEffectEditorTextViewDelegate>

@property (retain, nonatomic) JFXTextEffectEditorView *editorView;
@property (readonly, nonatomic) NSString *text;
@property (weak, nonatomic) id<CFXTextEffectEditorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEditingProperties:(id)a1;

- (void)selectAll;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)textPasteConfigurationSupporting:(id)a0 shouldAnimatePasteOfAttributedString:(id)a1 toRange:(id)a2;
- (id)textDraggableView:(id)a0 itemsForDrag:(id)a1;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)endTextEditing;
- (void)textEffectEditorTextViewDidUnmarkText:(id)a0;
- (void)applyTextEditingProperties:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEditingProperties:(id)a1;
- (void)CFX_setupTextField:(id)a0;
- (void)selectAtEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textEditingFrameRelativeToView:(id)a0;

@end
