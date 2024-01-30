@class UIStackView, NSString, UITextField, UILabel, NSLayoutConstraint;

@interface WFTextFieldCell : UITableViewCell <UITextFieldDelegate>

@property (weak, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (weak, nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ returnKeyHandler;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL hideLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setAccessoryType:(long long)a0;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)copy:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)_verticalPadding;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)textFieldDidChange:(id)a0;
- (void)_adjustStackViewPadding;
- (void)_updateStackViewForTraitCollection;
- (void)textFieldDidEndEditingExit:(id)a0;

@end
