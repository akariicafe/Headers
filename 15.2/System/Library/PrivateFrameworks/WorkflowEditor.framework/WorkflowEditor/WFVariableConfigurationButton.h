@class WFVariable, NSString, WFVariableConfigurationResponder;
@protocol WFVariableUIDelegate;

@interface WFVariableConfigurationButton : UIButton <WFVariableConfigurationResponderDelegate, WFVariableDelegate>

@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (retain, nonatomic) WFVariable *variable;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic) BOOL showsVariableAccessoryActions;
@property (nonatomic) unsigned long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFont;
+ (struct CGSize { double x0; double x1; })sizeForVariable:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)variableDidChange:(id)a0;
- (void)variableResponderDidBeginEditing:(id)a0;
- (void)variableResponderDidEndEditing:(id)a0;
- (BOOL)variableResponderHasText:(id)a0;
- (void)variableResponderDidDelete:(id)a0 withReplacementText:(id)a1;
- (void)variableResponderDidRevealAction:(id)a0;
- (void)variableResponder:(id)a0 didUpdateVariable:(id)a1;
- (void)variableResponder:(id)a0 presentPromptWithTitle:(id)a1 message:(id)a2 fieldConfigurationHandler:(id /* block */)a3 commitHandler:(id /* block */)a4;
- (void)buttonTapped;
- (void)updateVariableImage;
- (void)showVariableConfiguration;
- (void)hideVariableConfiguration;

@end
