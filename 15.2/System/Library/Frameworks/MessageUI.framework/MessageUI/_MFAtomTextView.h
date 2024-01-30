@class NSArray, MFComposeRecipientTextView;

@interface _MFAtomTextView : UITextView {
    unsigned long long _textStorageEditingDepth;
}

@property (readonly) NSArray *atoms;
@property (weak) MFComposeRecipientTextView *hostRecipientView;

- (id)selectionRectsForRange:(id)a0;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (void)_handleKeyUIEvent:(id)a0;
- (void)paste:(id)a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)undoManager;
- (long long)baseWritingDirection;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertGlyphRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateAtoms:(id /* block */)a0;
- (void)enumerateAtomAttachments:(id /* block */)a0;
- (void)batchTextStorageUpdates:(id /* block */)a0;
- (BOOL)isEditingTextStorage;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBlock:(id /* block */)a1;
- (BOOL)_delegateSupportsKeyboardEvents;

@end
