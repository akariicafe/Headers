@class NSArray, NSString, NSPredicate, CNContactPickerViewController;

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate> {
    void *_addressBook;
    CNContactPickerViewController *_contactPicker;
    BOOL _ignoreViewWillBePresented;
}

@property (nonatomic) id peoplePickerDelegate;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) const void *addressBook;
@property (copy, nonatomic) NSPredicate *predicateForEnablingPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)contactStore;
- (id)initWithAddressBook:(void *)a0;
- (BOOL)_allowsAutorotation;
- (void)setupViewControllers;
- (id)displayedPropertyKeys;
- (id)init;
- (void)_viewWillBePresented;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (id)contactPickerPresentedViewController:(id)a0;
- (BOOL)_isDelayingPresentation;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_endDelayingPresentation;
- (BOOL)_shouldPreventCancelButtonsFromShowing;
- (void)_setViewController:(id)a0 animated:(BOOL)a1;

@end
