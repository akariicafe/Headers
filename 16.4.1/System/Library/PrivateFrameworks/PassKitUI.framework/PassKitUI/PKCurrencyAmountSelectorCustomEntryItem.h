@class NSString, PKTextfieldTableViewSettingsRowCurrencyFormatter, PKTextFieldTableViewCell;

@interface PKCurrencyAmountSelectorCustomEntryItem : NSObject <PKSpendNotificationLimitViewControllerItem, UITextFieldDelegate> {
    PKTextFieldTableViewCell *_cell;
    PKTextfieldTableViewSettingsRowCurrencyFormatter *_formatter;
}

@property (copy, nonatomic) id /* block */ editingChangedHandler;
@property (readonly, nonatomic) long long editingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReuseIdentifier;

- (void)textFieldDidBeginEditing:(id)a0;
- (void)clear;
- (void)endEditing;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (BOOL)shouldHighlight;
- (void)_textFieldValueChanged:(id)a0;
- (id)decimalNumberValue;
- (id)initWithCurrencyCode:(id)a0;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
