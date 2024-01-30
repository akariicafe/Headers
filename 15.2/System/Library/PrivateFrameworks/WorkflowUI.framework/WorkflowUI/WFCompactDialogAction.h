@class WFDialogButton, UIInterfaceAction;

@interface WFCompactDialogAction : NSObject

@property (readonly, nonatomic) WFDialogButton *dialogButton;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) UIInterfaceAction *interfaceAction;

+ (id)actionForButton:(id)a0 handler:(id /* block */)a1;

- (void)invokeHandler;
- (void).cxx_destruct;

@end
