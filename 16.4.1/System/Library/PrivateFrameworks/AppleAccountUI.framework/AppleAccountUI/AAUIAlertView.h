@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AAUIAlertView : UIAlertView {
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;
    long long _chosenButtonIndex;
    id /* block */ _action;
    id /* block */ _actionWithText;
}

@property (readonly) long long chosenButtonIndex;

- (void).cxx_destruct;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 action:(id /* block */)a3;
- (id)initWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 otherButtonTitle:(id)a3 action:(id /* block */)a4;
- (id)initWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 otherButtonTitle:(id)a3 textFieldTitle:(id)a4 action:(id /* block */)a5;
- (id)initWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3;

@end
