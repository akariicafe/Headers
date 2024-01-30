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

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)copy:(id)a0;
- (void)setAccessoryType:(long long)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)awakeFromNib;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)textFieldDidChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)_verticalPadding;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)prepareForReuse;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)textFieldDidEndEditingExit:(id)a0;
- (void)_adjustStackViewPadding;
- (void)_updateStackViewForTraitCollection;

@end
