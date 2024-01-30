@class EKInviteeAlternativeTimeSearcher, EKUIInviteesViewAddInviteesSection, NSDate, EKUIInviteesViewProposedTimeSection, EKUIInviteesViewMessageSendingManager, EKUIEventInviteesView, NSMutableArray, EKUIEventInviteesEditViewController, EKUIInviteesViewAllInviteesCanAttendSection, EKEvent, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, NSString, NSArray, EKUIInviteesViewSomeInviteesCanAttendSection;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol>

@property (retain, nonatomic) NSDate *selectedStartDate;
@property (retain, nonatomic) NSDate *selectedEndDate;
@property (retain, nonatomic) EKUIEventInviteesView *inviteesView;
@property (nonatomic) BOOL resetAttendeesSections;
@property (nonatomic) BOOL resetConflictResolutionSections;
@property (nonatomic) BOOL viewIsVisible;
@property (nonatomic) BOOL deletedParticipants;
@property (nonatomic) BOOL fromDetail;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) EKUIInviteesViewAddInviteesSection *addInviteesSection;
@property (retain, nonatomic) NSMutableArray *respondedSection;
@property (retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection;
@property (retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection;
@property (retain, nonatomic) EKUIInviteesViewProposedTimeSection *proposedTimeSection;
@property (retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (retain, nonatomic) EKUIInviteesViewMessageSendingManager *messageSendingManager;
@property (nonatomic) BOOL prohibitCallingSearcherStateChanged;
@property (weak, nonatomic) EKUIEventInviteesEditViewController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

+ (id)_participantsInArray:(id)a0 thatAreNotInArray:(id)a1;

- (void)editItemViewController:(id)a0 didCompleteWithAction:(int)a1;
- (id)editItemEventToDetach;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_dismiss:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)_searcherStateChanged:(long long)a0;
- (void)_eventModified:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_fontSizeDefinitionsChanged:(id)a0;
- (void)updateCustomBackButton;
- (long long)_indexForSection:(id)a0;
- (id)_sectionForIndex:(unsigned long long)a0;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)a0;
- (id)_viewControllerForPresentingViewControllers;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_refreshIfNeeded;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_smoothRefreshIfNeededForSections:(id)a0;
- (void)_sendMessageToParticipants:(id)a0;
- (void)prepareToReloadAttendeesSections;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)initWithEvent:(id)a0 fromDetail:(BOOL)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_presentViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_requestDismissal;

@end
