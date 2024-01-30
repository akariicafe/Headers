@class UIButton, WFDialogButton;

@interface WFCompactDialogAction : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIButton *uiButton;
@property (readonly, nonatomic) WFDialogButton *dialogButton;
@property (nonatomic) BOOL enabled;

+ (id)actionForButton:(id)a0 handler:(id /* block */)a1;

- (void)invokeHandler;
- (void).cxx_destruct;

@end
