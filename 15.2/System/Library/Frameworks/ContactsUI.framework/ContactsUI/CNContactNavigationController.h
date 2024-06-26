@class CNContactListStyleApplier, UIBarButtonItem, UIKeyCommand, CNAccountsAndGroupsDataSource, CNContactViewController, CNUIUserActivityManager, CNAccountsAndGroupsViewController, NSString, UIAlertController, CNContactStore, CNContactListViewController, NSArray, NSNumber, CNContactStyle, CNContactStoreDataSource;
@protocol CNContactDataSource, CNContactNavigationControllerDelegate, CNScheduler;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter, NSUserActivityDelegate> {
    CNContactListViewController *_contactListViewController;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactViewController *reusableContactViewController;
@property (retain, nonatomic) NSNumber *shouldShowAccountsAndGroupsCachedValue;
@property (retain, nonatomic) CNAccountsAndGroupsViewController *accountsAndGroupsViewController;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource;
@property (nonatomic) long long leftButtonBehavior;
@property (nonatomic) long long rightButtonBehavior;
@property (retain, nonatomic) CNContactStoreDataSource *nonServerDataSource;
@property (weak, nonatomic) CNContactViewController *presentedContactViewController;
@property (retain, nonatomic) UIKeyCommand *addKeyCommand;
@property (weak, nonatomic) UIAlertController *facebookContactsAlertController;
@property (readonly, nonatomic) id<CNScheduler> backgroundScheduler;
@property (readonly, nonatomic) id<CNScheduler> mainThreadScheduler;
@property (nonatomic) BOOL hasPendingShowCard;
@property (retain, nonatomic) CNUIUserActivityManager *activityManager;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic) BOOL ignoresMapsData;
@property (nonatomic) BOOL hideGroupsButton;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (retain, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property (nonatomic) id<CNContactNavigationControllerDelegate> delegate;
@property (readonly, nonatomic) id<CNContactDataSource> dataSource;
@property (retain, nonatomic) CNContactStyle *contactStyle;
@property (nonatomic) BOOL allowsCardEditing;
@property (nonatomic) BOOL allowsCardDeletion;
@property (nonatomic) BOOL allowsCanceling;
@property (nonatomic) BOOL allowsDone;
@property (nonatomic) BOOL allowsContactBlocking;
@property (nonatomic) BOOL hidesSearchableSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)moveViewController:(id)a0 toParent:(id)a1;
+ (id)keyCommandForNewContact;
+ (id)newContactFormatter;

- (id)initWithDataSource:(id)a0;
- (void)addContact:(id)a0;
- (BOOL)shouldDisplayMeContactBanner;
- (void)clearServerSearchIfNeeded:(id)a0;
- (void)checkShouldShowAccountsAndGroupsDidChange;
- (void)popToContactListAndSaveChanges:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)selectNextContact:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)canAddContacts;
- (void)beginSearch:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cnui_presentViewController:(id)a0 animated:(BOOL)a1;
- (void)contactViewController:(id)a0 didDeleteContact:(id)a1;
- (void)updateNavigationButtonsInSearchMode:(BOOL)a0 animated:(BOOL)a1;
- (void)selectPreviousContact:(id)a0;
- (void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)a0;
- (void)setShouldDisplayMeContactBanner:(BOOL)a0;
- (BOOL)shouldShowGroupsButton;
- (void)updateNavigationButtonsInSearchMode:(BOOL)a0;
- (id)reuseableContactViewControllerConfiguredForContact:(id)a0 mode:(long long)a1;
- (void)checkForInfoContentWithContext:(id)a0;
- (void)scrollToContact:(id)a0 animated:(BOOL)a1;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (void)showCardForContact:(id)a0 animated:(BOOL)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)cancelSearch:(id)a0;
- (id)nextResponderForContactListViewController:(id)a0;
- (void)checkForFacebookContactsWithDelay:(double)a0 allowAlert:(BOOL)a1;
- (id)contactListViewController;
- (void)accountsAndGroupsViewControllerDidUpdateSelection:(id)a0;
- (BOOL)isPresentedContactViewControllerVisible;
- (void)contactListViewController:(id)a0 didSelectContact:(id)a1;
- (void)toggleEditContact:(id)a0;
- (void)updateUserActivityState:(id)a0;
- (BOOL)shouldShowAccountsAndGroups;
- (BOOL)shouldShowRightAddAndCancelButton;
- (void)applicationDidResume;
- (void)contactListViewController:(id)a0 shouldPresentContact:(id)a1 shouldScrollToContact:(BOOL)a2;
- (void)observeOtherFacebookContactsAlert;
- (void).cxx_destruct;
- (void)notifyOtherFacebookContactsAlertDidSelectAction;
- (void)toggleGroupsPanel:(id)a0;
- (void)updateNavigationButtonsAnimated:(BOOL)a0;
- (BOOL)shouldShowLeftCancelAndRightDoneButton;
- (id)checkShouldShowAccountsAndGroups;
- (void)searchForString:(id)a0;
- (void)updateLeftNavigationButtonAnimated:(BOOL)a0;
- (void)accountsAndGroupsViewControllerDidFinish:(id)a0;
- (void)_updateUserActivity;
- (BOOL)shouldFlipDirectionWhenChangingSelectionWithKey:(id)a0;
- (void)createUserActivity;
- (void)done:(id)a0;
- (BOOL)shouldShowRightAddButton;
- (void)showCardForContactBeforeIndexPath:(id)a0;
- (void)executeAddContact;
- (BOOL)contactListViewController:(id)a0 canSelectContact:(id)a1;
- (void)dismissSearchAndSelectContact:(id)a0;
- (void)presentAddContactViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)contactSuggestionViewController:(id)a0 shouldSelectContact:(id)a1 atIndexPath:(id)a2;
- (id)addContactPresenter;
- (void)showCardForContact:(id)a0 resetFilter:(BOOL)a1 resetSearch:(BOOL)a2 fallbackToFirstContact:(BOOL)a3 scrollToContact:(BOOL)a4 animated:(BOOL)a5;
- (void)presentGroupsViewController:(id)a0;
- (BOOL)contactListViewController:(id)a0 shouldSelectContact:(id)a1 atIndexPath:(id)a2;
- (BOOL)shouldShowRightCancelButton;
- (void)dealloc;
- (BOOL)shouldShowLeftCancelAndRightAddButton;
- (void)contactStyleCurrentStyleDidChange:(id)a0;
- (id)userActivityRepresentingCurrentlyDisplayedContact;
- (void)showCardForContactAfterIndexPath:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (id)firstVisibleContact;
- (void)showCardForContactIfPossible:(id)a0;
- (void)addContact:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldShowLeftDoneAndRightAddButton;
- (id)initWithDataSource:(id)a0 contactFormatter:(id)a1 applyGroupFilterFromPreferences:(BOOL)a2 environment:(id)a3 allowsLargeTitles:(BOOL)a4;
- (id)initWithDataSource:(id)a0 environment:(id)a1 allowsLargeTitles:(BOOL)a2;
- (id)initWithDataSource:(id)a0 allowsLargeTitles:(BOOL)a1;
- (void)startEditingPresentedContact;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
