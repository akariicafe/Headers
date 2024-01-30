@class _NSAttributeRun;

@interface _UITextUndoOperationSetAttributes : _UIUndoTextOperation {
    _NSAttributeRun *_attributes;
}

- (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inputController:(id)a1;

@end
