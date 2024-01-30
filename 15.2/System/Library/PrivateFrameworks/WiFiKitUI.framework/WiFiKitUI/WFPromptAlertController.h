@interface WFPromptAlertController : UIAlertController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)promptAlertControllerWithTitle:(id)a0 message:(id)a1 cancelTitle:(id)a2 successTitle:(id)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;

@end
