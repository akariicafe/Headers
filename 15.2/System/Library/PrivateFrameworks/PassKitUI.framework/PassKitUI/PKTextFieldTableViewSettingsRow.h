@class NSString, PKTextFieldTableViewSettingsRowFormatter;

@interface PKTextFieldTableViewSettingsRow : NSObject <UITextFieldDelegate, PKTableViewSettingsRow> {
    PKTextFieldTableViewSettingsRowFormatter *_formatter;
}

@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldHighlight;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_textFieldValueChanged:(id)a0;
- (id)initWithTitle:(id)a0 value:(id)a1 formatter:(id)a2 changeHandler:(id /* block */)a3;

@end
