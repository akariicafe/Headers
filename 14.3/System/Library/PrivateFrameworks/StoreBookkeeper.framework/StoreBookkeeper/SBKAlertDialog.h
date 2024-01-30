@class NSString;

@interface SBKAlertDialog : NSObject

@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *acceptButtonTitle;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (BOOL)_runAsUIAlertView;
- (void)_runAsCFUserNotificationDisplayAlert;
- (id)initWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 acceptButtonTitle:(id)a3;

@end
