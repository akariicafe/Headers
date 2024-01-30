@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController;

- (BOOL)canUndo;
- (BOOL)canRedo;
- (void).cxx_destruct;
- (void)undo;
- (void)redo;
- (void)removeAllActions;

@end
