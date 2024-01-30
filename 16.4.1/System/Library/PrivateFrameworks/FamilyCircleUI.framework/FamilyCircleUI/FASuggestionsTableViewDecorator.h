@class NSString, NSArray, RUITableView, NSSet, FAInviteContext, NSObject, RemoteUIController, FAInviteSuggestions, FAProfilePictureStore, CNContactStore;
@protocol FAInviteConfigurationController;

@interface FASuggestionsTableViewDecorator : FATableViewDecorator <FAInviteControllerDelegate> {
    RUITableView *_remoteTableViewController;
    FAProfilePictureStore *_familySuggestionsPictureStore;
    NSArray *_recommendedFamilyMembers;
    NSArray *_emergencyContacts;
    FAInviteContext *_context;
    NSObject<FAInviteConfigurationController> *_inviteConfigurationController;
    RemoteUIController *_viewController;
    FAInviteSuggestions *_suggester;
    NSSet *_invitedHandles;
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSuggestionsInPage:(id)a0;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)inviteController:(id)a0 didFinishWithStatus:(unsigned long long)a1 recipients:(id)a2 userInfo:(id)a3 error:(id)a4;
- (id)accessoryViewFor:(id)a0;
- (void)didTapInviteButtonInCell:(id)a0;
- (id)indexFor:(id)a0;
- (id)indexForSuggestionsSection;
- (id)initWithTableView:(id)a0 ruiTableView:(id)a1 pictureStore:(id)a2 recommendations:(id)a3 emergencyContacts:(id)a4 context:(id)a5 viewController:(id)a6 suggester:(id)a7;
- (id)inviteButtonForSuggestion;
- (id)inviteSentImageForSuggestion;
- (id)relationForContact:(id)a0;
- (void)sendSuggestionFeedbackFor:(id)a0;
- (void)setupInviteConfiguratioControllerFor:(long long)a0 contactHandle:(id)a1;
- (void)updateSuggestionCellFor:(id)a0;

@end
