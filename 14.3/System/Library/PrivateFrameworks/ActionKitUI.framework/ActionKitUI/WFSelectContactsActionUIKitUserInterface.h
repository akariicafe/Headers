@class NSArray, NSString;

@interface WFSelectContactsActionUIKitUserInterface : WFActionUserInterface <WFSelectContactsActionUserInterface, CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL selectMultiple;
@property (copy, nonatomic) NSArray *contactProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)contactPicker:(id)a0 didSelectContactProperties:(id)a1;
- (void)contactPicker:(id)a0 didSelectContacts:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithProperties:(id)a0 selectMultiple:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)finishWithContacts:(id)a0 error:(id)a1;

@end
