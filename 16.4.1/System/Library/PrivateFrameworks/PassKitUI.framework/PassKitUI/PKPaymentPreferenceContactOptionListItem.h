@class PKPaymentPreferenceContact, CNContact;

@interface PKPaymentPreferenceContactOptionListItem : PKPaymentPreferenceOptionListItem

@property (readonly, nonatomic) CNContact *contactPreference;
@property (readonly, nonatomic) PKPaymentPreferenceContact *contactSectionPreference;

- (id)_placeholderText;
- (id)_text;
- (id)_secondaryText;
- (id)_inlineEditingConfiguration;
- (BOOL)_isEmail;
- (BOOL)_isPhoneNumber;
- (BOOL)_isPostalAddress;
- (BOOL)_supportsDeleteAction;
- (BOOL)_supportsEditAction;
- (id)defaultAccessories;
- (BOOL)supportsInlineEditing;

@end
