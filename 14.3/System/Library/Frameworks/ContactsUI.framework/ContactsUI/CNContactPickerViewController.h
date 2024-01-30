@class NSString, NSArray, CNContainer, UINavigationController, NSPredicate, CNContact, FAFamilyMember, UIViewController, UIBarButtonItem, _UIRemoteViewController;
@protocol CNContactPickerDelegate, CNContactPickerContentViewController;

@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate> {
    BOOL _ignoreViewWillBePresented;
}

@property (retain, nonatomic) UIViewController<CNContactPickerContentViewController> *viewController;
@property (retain, nonatomic) CNContact *scrollContact;
@property (retain, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (nonatomic) long long mode;
@property (nonatomic) long long behavior;
@property (nonatomic) long long cardActions;
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic) BOOL onlyRealContacts;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCancel;
@property (nonatomic) BOOL allowsDone;
@property (nonatomic) BOOL allowsDeletion;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL hidesPromptInLandscape;
@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerValue;
@property (readonly, getter=isDefaultViewControllerVisible) BOOL defaultViewControllerVisible;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL autocloses;
@property (copy, nonatomic) NSArray *displayedPropertyKeys;
@property (weak, nonatomic) id<CNContactPickerDelegate> delegate;
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(id)a0 property:(id)a1;
- (void)pickerDidSelectContacts:(id)a0 properties:(id)a1;
- (id)_pickerPresentedViewController;
- (void)_checkConsistencyFromOptions:(id)a0;
- (void)_viewWillBePresented;
- (void)scrollToClosestContactMatching:(id)a0;
- (void)invalidateSelectionAnimated:(BOOL)a0;
- (void)_setupViewController;
- (BOOL)_shouldBeOutOfProcess;
- (void)_prepareViewController;
- (void)closePickerIfNeeded;
- (void)notifyDelegateForCancellation;
- (void)popToDefaultViewController:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_isDelayingPresentation;
- (void)_setViewController:(id)a0;
- (void)_endDelayingPresentation;

@end
