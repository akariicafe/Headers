@interface _UIUserNotificationAlertView : UIAlertView {
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;

- (BOOL)isVisible;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (long long)addButtonWithTitle:(id)a0;
- (void)show;
- (void)dealloc;
- (id)textFieldAtIndex:(long long)a0;
- (void)cancelAlertView;
- (void)setHostedWindow:(id)a0;
- (void)_removeObservervations;
- (void)_cancelUserNotification;
- (void)setRemoteViewController:(id)a0;

@end
