@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController;

- (void)redo;
- (void)undo;
- (BOOL)canUndo;
- (void)removeAllActions;
- (void).cxx_destruct;
- (BOOL)canRedo;

@end
