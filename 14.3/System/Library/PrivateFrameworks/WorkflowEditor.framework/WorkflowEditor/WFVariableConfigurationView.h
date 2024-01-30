@class UINavigationController, WFVariableConfigurationViewController, NSString;

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate>

@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) WFVariableConfigurationViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)preferredHeight;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithVariable:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
