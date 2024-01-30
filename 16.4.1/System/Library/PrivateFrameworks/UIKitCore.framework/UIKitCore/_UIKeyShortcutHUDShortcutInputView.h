@class UIStackView, UIColor, _UIKeyShortcutHUDShortcut, UILabel, UIView, NSLayoutConstraint;

@interface _UIKeyShortcutHUDShortcutInputView : UIView

@property (retain, nonatomic) UILabel *modifiersLabel;
@property (retain, nonatomic) UILabel *inputLabel;
@property (retain, nonatomic) UIView *inputLabelContainer;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) NSLayoutConstraint *reservedInputWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *reservedInputWidthSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *modifiersLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *inputLabelWidthConstraint;
@property (nonatomic, getter=isInputStyledAsSingleCharacterOrSymbol) BOOL inputStyledAsSingleCharacterOrSymbol;
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *shortcut;
@property (weak, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) double modifiersLabelWidth;
@property (readonly, nonatomic) double inputLabelWidth;
@property (nonatomic) BOOL wantsCompressedWidth;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateInputLabelSpacing:(id)a0;
- (void)_updateInputLabelStyle:(id)a0;
- (void)setModifiersWidth:(double)a0 inputWidth:(double)a1;

@end
