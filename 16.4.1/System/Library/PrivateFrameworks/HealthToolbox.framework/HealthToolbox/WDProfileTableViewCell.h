@class UIView, NSString, NSArray, UIButton, UITextField, NSLayoutConstraint, UILabel, UIColor;

@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate> {
    UIButton *_clearButton;
    UIColor *_normalDisplayValueColor;
    UIColor *_selectedDisplayValueColor;
    NSLayoutConstraint *_displayValueTrailingConstraint;
    NSLayoutConstraint *_clearButtonWidthAnchor;
    NSLayoutConstraint *_displayValueLeadingAnchor;
    NSArray *_normalSizeConstraints;
    NSArray *_accessibilitySizeConstraints;
}

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayValue;
@property (copy, nonatomic) NSString *placeholderValue;
@property (nonatomic) BOOL shouldUseSelectedColorForDisplayValue;
@property (nonatomic) BOOL shouldDisplayClearButtonDuringEditing;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UITextField *displayValueTextField;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)editingTrailingEdgeMargin;
+ (double)notEditingTrailingEdgeMargin;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)_setupConstraints;
- (BOOL)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeClearButtonTarget:(id)a0 action:(SEL)a1;
- (void)addClearButtonTarget:(id)a0 action:(SEL)a1;
- (void)_setupUI;
- (void)_setupConstraintsForContentSize;
- (void)_setupAccessibilitySizeConstraintsWithTrailingConstant:(double)a0;
- (void)_setupNonAccessibilitySizeConstraints;
- (void)_updateClearButtonState;

@end
