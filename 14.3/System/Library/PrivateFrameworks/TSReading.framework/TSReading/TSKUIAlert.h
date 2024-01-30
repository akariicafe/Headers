@class NSString, UIAlertView;

@interface TSKUIAlert : TSKAbstractAlert <UIAlertViewDelegate> {
    UIAlertView *_alertView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUseMockUIAlert:(BOOL)a0;
+ (id)alertWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3;

- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)alertView:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (long long)numberOfButtons;
- (void)didPresentAlertView:(id)a0;
- (long long)firstOtherButtonIndex;
- (long long)cancelButtonIndex;
- (void)setCancelButtonIndex:(long long)a0;
- (void)willPresentAlertView:(id)a0;
- (long long)addButtonWithTitle:(id)a0;
- (id)buttonTitleAtIndex:(long long)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3;
- (void)showAlert;
- (id)initWithTitle:(id)a0 message:(id)a1 cancelButtonTitle:(id)a2 otherButtonTitle:(id)a3 otherOtherButtonTitle:(id)a4;

@end
