@class NSString;

@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_filteredProperty:(id)a0;
- (id)_filteredContact:(id)a0 withKeys:(id)a1;
- (void)_logPrivacyAccountingAccessEvent;
- (id)init;
- (void)pickerDidCancel;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;

@end
