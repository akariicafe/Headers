@interface AAUserNotification : NSObject

+ (id)_defaultParameters;
+ (void)_waitForResponseAndReleaseNotification:(struct __CFUserNotification { } *)a0 completion:(id /* block */)a1;
+ (void)showUserNotificationWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 withCompletionBlock:(id /* block */)a4;
+ (void)showUserNotificationWithTitle:(id)a0 message:(id)a1 secureTextFieldTitle:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitle:(id)a4 completion:(id /* block */)a5;
+ (void)showUserNotificationWithTitle:(id)a0 message:(id)a1 textFieldTitle:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitle:(id)a4 completion:(id /* block */)a5;
+ (void)waitForResponseToNotification:(struct __CFUserNotification { } *)a0 completion:(id /* block */)a1;

@end
