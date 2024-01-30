@interface _UIUserNotificationAlertView : UIAlertView {
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;

- (BOOL)isVisible;
- (void)show;
- (void)dealloc;
- (void)setRemoteViewController:(id)a0;
- (void).cxx_destruct;
- (void)cancelAlertView;
- (void)_cancelUserNotification;
- (void)_removeObservervations;
- (long long)addButtonWithTitle:(id)a0;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)setHostedWindow:(id)a0;
- (id)textFieldAtIndex:(long long)a0;

@end
