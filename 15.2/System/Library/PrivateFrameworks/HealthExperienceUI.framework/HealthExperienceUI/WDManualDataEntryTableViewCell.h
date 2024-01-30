@class UIFont, NSString, UIView, NSArray, NSNumberFormatter, HKDisplayType, UITextField, NSLayoutConstraint, UILabel;
@protocol WDManualDataEntryTableViewCellDelegate;

@interface WDManualDataEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {
    unsigned long long _dataEntryType;
    UITextField *_valueField;
    UIView *_inputView;
    NSString *_decimalSeparator;
    UILabel *_displayNameLabel;
    UILabel *_unitLabel;
    NSArray *_displayNameLabelConstraints;
    NSNumberFormatter *_integerNumberFormatter;
    NSString *_lastValidSanitizedText;
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    NSLayoutConstraint *_largeTextValueFieldToUnitLabelSpacingConstraint;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldHighlightWhenEditing;
@property (weak, nonatomic) id<WDManualDataEntryTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void)endEditing;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_updateFont;
- (void)_setupConstraints;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)inputView;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setInputView:(id)a0;
- (void)dealloc;
- (id)initWithDisplayName:(id)a0 unitName:(id)a1 dataEntryType:(unsigned long long)a2;
- (void)_updateDecimalSeparator;
- (void)_setupUIWithDisplayName:(id)a0 unitName:(id)a1;
- (void)_setupIntegerNumberFormatterIfNeeded;
- (void)_updateDisplayNameLabelConstraints;
- (void)_valueFieldDidChange:(id)a0;
- (id)_sanitizedTextFieldText:(id)a0;
- (id)_removeDecimalSeparatorsFromText:(id)a0;

@end
