@class UIAlertController, UITextField;

@interface EKUIDeclineCommentController : NSObject {
    UIAlertController *_alertController;
    UITextField *_alertTextField;
    id /* block */ _completionBlock;
}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(id /* block */)a0;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)a0 currentComment:(id)a1 viewController:(id)a2 completionBlock:(id /* block */)a3;

- (void)_completeWithButton:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_presentAlertWithOrganizer:(id)a0 currentComment:(id)a1 viewController:(id)a2;
- (void)dismissAnimated:(BOOL)a0;

@end
