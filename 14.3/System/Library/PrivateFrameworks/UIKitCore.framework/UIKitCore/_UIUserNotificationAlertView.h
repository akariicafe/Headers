@interface _UIUserNotificationAlertView : UIAlertView {
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;

- (void)show;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)cancelAlertView;
- (void)setRemoteViewController:(id)a0;
- (void)setHostedWindow:(id)a0;
- (void)_removeObservervations;
- (void)_cancelUserNotification;
- (BOOL)isVisible;
- (id)textFieldAtIndex:(long long)a0;
- (long long)addButtonWithTitle:(id)a0;

@end
