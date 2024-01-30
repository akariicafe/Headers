@class UIButton;
@protocol WFVariableConfigurationAccessoryViewDelegate;

@interface WFVariableConfigurationAccessoryView : UIInputView

@property (weak, nonatomic) UIButton *keyboardButton;
@property (weak, nonatomic) UIButton *clearButton;
@property (weak, nonatomic) UIButton *renameButton;
@property (weak, nonatomic) UIButton *revealActionButton;
@property (weak, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) id<WFVariableConfigurationAccessoryViewDelegate> delegate;
@property (nonatomic) BOOL canRename;
@property (nonatomic) BOOL canRevealAction;
@property (nonatomic) unsigned long long exitAccessory;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)donePressed;
- (void)clearPressed;
- (void)returnToKeyboardPressed;
- (void)renamePressed;
- (void)revealActionPressed;

@end
