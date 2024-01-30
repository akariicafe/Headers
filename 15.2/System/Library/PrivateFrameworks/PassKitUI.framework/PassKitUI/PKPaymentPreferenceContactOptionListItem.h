@class PKPaymentPreferenceContact, CNContact;

@interface PKPaymentPreferenceContactOptionListItem : PKPaymentPreferenceOptionListItem

@property (readonly, nonatomic) CNContact *contactPreference;
@property (readonly, nonatomic) PKPaymentPreferenceContact *contactSectionPreference;

- (id)_text;
- (BOOL)_isEmail;
- (id)_secondaryText;
- (id)_placeholderText;
- (id)defaultAccessories;
- (BOOL)supportsInlineEditing;
- (id)_inlineEditingConfiguration;
- (BOOL)_supportsDeleteAction;
- (BOOL)_supportsEditAction;
- (BOOL)_isPhoneNumber;
- (BOOL)_isPostalAddress;

@end
