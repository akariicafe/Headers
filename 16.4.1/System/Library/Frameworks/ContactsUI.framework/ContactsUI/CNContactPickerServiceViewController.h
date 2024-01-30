@class NSString;

@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)pickerDidCancel;
- (id)_filteredContact:(id)a0 withKeys:(id)a1;
- (id)_filteredProperty:(id)a0;
- (void)_logPrivacyAccountingAccessEvent;
- (void)pickerDidCompleteWithNewContact:(id)a0;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;

@end
