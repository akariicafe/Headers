@class NSString, NSArray, CNMutablePostalAddress, CNPostalAddressEditorTableView, NSMutableDictionary, CNPostalAddress, NSDictionary, CNPostalAddressFormattingSpecification, UIColor;
@protocol CNPresenterDelegate;

@interface CNPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText> {
    CNMutablePostalAddress *_address;
    NSDictionary *_valueTextAttributes;
}

@property (retain, nonatomic) CNPostalAddressEditorTableView *tableView;
@property (copy, nonatomic) NSArray *cellsLayout;
@property (retain, nonatomic) CNPostalAddressFormattingSpecification *formatSpecification;
@property (readonly, nonatomic) NSMutableDictionary *textFields;
@property (copy, nonatomic) CNPostalAddress *address;
@property (copy, nonatomic) UIColor *separatorColor;
@property (readonly, nonatomic) long long lineCount;
@property (weak, nonatomic) id<CNPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *ab_text;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

- (id)_countryCode;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isFirstResponder;
- (void)setEnabled:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)countryPicker:(id)a0 didPickCountryCode:(id)a1;
- (void)countryPickerDidCancel:(id)a0;
- (void)_invalidateCellsLayout;
- (void)_setAddressValue:(id)a0 forKey:(id)a1;
- (id)_addressValueForKey:(id)a0;
- (id)_normalizeCountryCodeToISO:(id)a0;
- (id)_cellsLayoutForCountryCode:(id)a0;
- (id)keyboardSettingsForAddress:(id)a0 component:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)textFieldChanged:(id)a0;

@end
