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

+ (double)notEditingTrailingEdgeMargin;
+ (double)editingTrailingEdgeMargin;

- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)removeClearButtonTarget:(id)a0 action:(SEL)a1;
- (void)_setupUI;
- (void)addClearButtonTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (void)_updateClearButtonState;
- (void)_setupNonAccessibilitySizeConstraints;
- (void)_setupAccessibilitySizeConstraintsWithTrailingConstant:(double)a0;
- (void)_setupConstraintsForContentSize;

@end
