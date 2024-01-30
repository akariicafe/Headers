@class NSString, UITextField, AlphanumericPINTableViewCell, UITableView;

@interface PSTextFieldPINView : PINView <UITableViewDataSource> {
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}

@property (nonatomic) BOOL usesNumericKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)keyboardInputChanged:(id)a0;
- (void)layoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isFirstResponder;
- (id)stringValue;
- (void)deleteLastCharacter;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setStringValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setTextFieldKeyboardType:(long long)a0;
- (void)showError:(id)a0 animate:(BOOL)a1;
- (void)setTextFieldKeyboardAppearance:(long long)a0;
- (void)hidePasscodeField:(BOOL)a0;
- (void)okButtonPressed:(id)a0;
- (void)appendString:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setBlocked:(BOOL)a0;

@end
