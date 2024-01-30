@class NSArray, UIImageView, NSString, WFVariablesViewController;
@protocol WFVariableProvider, WFVariableShortcutsTrayDelegate;

@interface WFVariableShortcutsTray : UIInputView <WFVariablesViewControllerDelegate>

@property (retain, nonatomic) WFVariablesViewController *variablesViewController;
@property (retain, nonatomic) WFVariablesViewController *specialVariablesViewController;
@property (retain, nonatomic) UIImageView *keyboardImageView;
@property (weak, nonatomic) id<WFVariableShortcutsTrayDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (nonatomic) BOOL showsUserDefinedVariables;
@property (nonatomic) BOOL showsMagicVariableButton;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyboardWindow;
- (void)reveal;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(long long)a1;
- (void)obsureWithCompletion:(id /* block */)a0;
- (void)prepareReveal;
- (void)variablesViewController:(id)a0 didSelectVariable:(id)a1;
- (void)variablesViewControllerDidSelectMagicVariable:(id)a0;

@end
