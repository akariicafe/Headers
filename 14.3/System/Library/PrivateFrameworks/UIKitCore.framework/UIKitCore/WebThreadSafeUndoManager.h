@interface WebThreadSafeUndoManager : NSUndoManager

- (void)redo;
- (void)undo;
- (BOOL)_alwaysShowEditAlertView;

@end
