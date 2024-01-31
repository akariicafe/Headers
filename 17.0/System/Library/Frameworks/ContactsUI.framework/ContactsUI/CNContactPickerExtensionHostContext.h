@class NSString, CNContactPickerHostViewController;

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>

@property (weak, nonatomic) CNContactPickerHostViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)pickerDidCancel;
- (void)invalidateSelectionAnimated:(BOOL)a0;
- (void)pickerDidCompleteWithNewContact:(id)a0;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;

@end
