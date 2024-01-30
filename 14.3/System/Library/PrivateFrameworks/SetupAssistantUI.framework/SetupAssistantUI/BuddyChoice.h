@class UIAlertController, NSString, UIViewController;

@interface BuddyChoice : NSObject {
    UIViewController *_nextController;
}

@property (copy, nonatomic) id /* block */ condition;
@property (retain, nonatomic) UIAlertController *alertController;
@property (copy, nonatomic) id /* block */ confirmationCompletion;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) Class nextControllerClass;
@property (weak, nonatomic) UIViewController *choiceController;

- (void).cxx_destruct;
- (void)_choiceConfirmed:(BOOL)a0;
- (id)initWithTitle:(id)a0 nextItemClass:(Class)a1;
- (id)confirmationAcceptActionWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;
- (id)confirmationCancelActionWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;
- (void)setConfirmationAlert:(id)a0 condition:(id /* block */)a1;
- (void)runConfirmationIfNeededCompletion:(id /* block */)a0;

@end
