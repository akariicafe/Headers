@class NSArray, NSString, NSPredicate, CNContactPickerViewController;

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate> {
    void *_addressBook;
    CNContactPickerViewController *_contactPicker;
    BOOL _ignoreViewWillBePresented;
}

@property (nonatomic) id peoplePickerDelegate;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) void *addressBook;
@property (copy, nonatomic) NSPredicate *predicateForEnablingPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfPerson;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithAddressBook:(void *)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)contactStore;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)_allowsAutorotation;
- (void)_endDelayingPresentation;
- (BOOL)_isDelayingPresentation;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)_viewWillBePresented;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (id)contactPickerPresentedViewController:(id)a0;
- (id)displayedPropertyKeys;
- (void)setupViewControllers;
- (void)_setViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldPreventCancelButtonsFromShowing;

@end
