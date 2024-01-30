@class UITextInputController;

@interface _UIUndoTextOperation : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } affectedRange;
@property (weak, nonatomic) UITextInputController *inputController;

- (void)undoRedo;
- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inputController:(id)a1;
- (BOOL)supportsCoalescing;

@end
