@class NSAttributedString;

@interface _UITextUndoOperationReplace : _UIUndoTextOperation {
    struct _NSRange { unsigned long long location; unsigned long long length; } _replacementRange;
    NSAttributedString *_attributedString;
}

- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inputController:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void).cxx_destruct;
- (void)undoRedo;

@end
