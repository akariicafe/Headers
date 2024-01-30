@class NSString, NSArray, NSPredicate, CNContainer, CNContactStoreDataSource, CNManagedConfiguration, UINavigationController, NSMutableArray, FAFamilyMember, UIBarButtonItem, CNContactNavigationController;
@protocol CNContactPickerContentDelegate;

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>

@property (retain, nonatomic) CNContactNavigationController *contactNavigationController;
@property (retain, nonatomic) CNContactStoreDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *contactProperties;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (copy, nonatomic) NSArray *displayedPropertyKeys;
@property (nonatomic) long long cardActions;
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic) BOOL onlyRealContacts;
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCancel;
@property (nonatomic) BOOL allowsDeletion;
@property (nonatomic) BOOL allowsDone;
@property (nonatomic) BOOL allowsSearchForMultiSelect;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL hidesPromptInLandscape;
@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerValue;
@property (copy, nonatomic) NSPredicate *predicateForEnablingContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfContact;
@property (copy, nonatomic) NSPredicate *predicateForSelectionOfProperty;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) FAFamilyMember *familyMember;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (nonatomic) BOOL shouldDisplaySuggestionsController;
@property (retain, nonatomic) NSArray *suggestionsIgnoredContactIdentifiers;
@property (retain, nonatomic) NSArray *suggestionsInteractionDomains;
@property (retain, nonatomic) NSArray *suggestedContacts;
@property (nonatomic) BOOL clientWantsSingleContact;
@property (nonatomic) BOOL clientWantsSingleProperty;
@property (nonatomic) BOOL clientWantsMultipleContacts;
@property (nonatomic) BOOL clientWantsMultipleProperties;
@property (nonatomic) BOOL clientHasContactsAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNContactPickerContentDelegate> delegate;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;

- (void)setupWithOptions:(id)a0 readyBlock:(id /* block */)a1;
- (void)contactNavigationControllerDidCancel:(id)a0;
- (void)contactNavigationControllerDidComplete:(id)a0;
- (BOOL)contactNavigationControllerShouldAddNewContact:(id)a0;
- (BOOL)contactNavigationController:(id)a0 canSelectContact:(id)a1;
- (BOOL)contactNavigationController:(id)a0 shouldSelectContact:(id)a1 atIndexPath:(id)a2;
- (BOOL)contactNavigationController:(id)a0 shouldShowCardForContact:(id)a1;
- (BOOL)contactNavigationController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)a0;
- (BOOL)contactNavigationController:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateSelectionAnimated:(BOOL)a0;
- (void)invalidate;
- (BOOL)contactSuggestionViewController:(id)a0 shouldSelectContact:(id)a1 atIndexPath:(id)a2;
- (void)_selectedContact:(id)a0;
- (void)_selectedProperty:(id)a0;
- (id)_validatePredicatesWithError:(id *)a0;
- (void)_updatePromptWithViewSize:(struct CGSize { double x0; double x1; })a0 transitionCoordinator:(id)a1;
- (id)descriptorsForKeysRequiredByDelegate;
- (void)_selectedContacts:(id)a0;
- (void)_selectedProperties:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
