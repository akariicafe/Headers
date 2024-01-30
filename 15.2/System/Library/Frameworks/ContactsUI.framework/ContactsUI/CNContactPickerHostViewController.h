@class UINavigationController, NSString, NSExtension, UIBarButtonItem;
@protocol CNContactPickerContentDelegate, NSCopying;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol>

@property (retain, nonatomic) id<NSCopying> currentRequestIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (weak, nonatomic) id<CNContactPickerContentDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getViewController:(id /* block */)a0;
+ (id)contactPickerExtension;
+ (id)contextForIdentifier:(id)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pickerDidCancel;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;
- (void)invalidateSelectionAnimated:(BOOL)a0;
- (void)invalidate;

@end
