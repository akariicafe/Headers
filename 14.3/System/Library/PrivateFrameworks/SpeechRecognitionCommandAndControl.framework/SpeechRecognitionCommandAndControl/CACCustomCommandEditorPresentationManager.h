@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager

+ (long long)remoteViewType;
+ (int)axNotification;

- (void)_showCustomCommandEditorWithContextKey:(id)a0 contextValue:(id)a1;
- (BOOL)showCustomCommandEditorWithGesture:(id)a0;
- (BOOL)showCustomCommandEditorWithTextToInsert:(id)a0;
- (BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)a0;
- (BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)a0;
- (void)handleAXNotificationData:(void *)a0;

@end
