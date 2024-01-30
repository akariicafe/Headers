@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager

+ (int)axNotification;
+ (long long)remoteViewType;

- (void)_showCustomCommandEditorWithContextKey:(id)a0 contextValue:(id)a1;
- (void)handleAXNotificationData:(void *)a0;
- (BOOL)showCustomCommandEditorWithGesture:(id)a0;
- (BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)a0;
- (BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)a0;
- (BOOL)showCustomCommandEditorWithTextToInsert:(id)a0;

@end
