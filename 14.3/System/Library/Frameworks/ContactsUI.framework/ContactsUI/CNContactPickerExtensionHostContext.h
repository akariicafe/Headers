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
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;
- (void)invalidateSelectionAnimated:(BOOL)a0;

@end
