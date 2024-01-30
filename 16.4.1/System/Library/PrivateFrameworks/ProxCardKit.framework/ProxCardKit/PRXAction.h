@class UIButton, NSString;

@interface PRXAction : NSObject {
    id /* block */ _handler;
}

@property (nonatomic) BOOL usesLegacyStyling;
@property (weak, nonatomic) UIButton *button;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)defaultDismissalActionForViewController:(id)a0;
+ (id)dismissalConfirmationActionForViewController:(id)a0 withTitle:(id)a1 message:(id)a2 confirmButtonTitle:(id)a3 cancelButtonTitle:(id)a4;

- (void)_callHandler;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
