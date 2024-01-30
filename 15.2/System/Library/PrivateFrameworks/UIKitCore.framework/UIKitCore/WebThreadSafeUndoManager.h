@interface WebThreadSafeUndoManager : NSUndoManager

- (BOOL)_alwaysShowEditAlertView;
- (void)undo;
- (void)redo;

@end
