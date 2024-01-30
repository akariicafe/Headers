@class CNContactAction, CNContactAddFavoriteAction, CNCapabilitiesManager, CNPropertyLinkedCardsAction, CNContactAddLinkedCardAction, CNPropertyGroupsDataSource, CNPropertyFaceTimeAction, CNUIContactsEnvironment, CNContactAddToExistingContactAction, CNContactStore, CNUIUserActionListDataSource, CNMutableContact, CNContactSelectContainersAction, CNContainer, CNContactCreateNewContactAction, CNPropertySendMessageAction;
@protocol CNPropertyActionDelegate;

@interface CNContactActionProvider : NSObject

@property (readonly, nonatomic) CNMutableContact *contact;
@property (readonly, nonatomic) CNContainer *container;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNPropertyGroupsDataSource *propertyGroupsDataSource;
@property (readonly, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (readonly, nonatomic) CNCapabilitiesManager *capabilities;
@property (readonly, nonatomic) CNUIContactsEnvironment *environment;
@property (weak, nonatomic) id<CNPropertyActionDelegate> actionDelegate;
@property (readonly, nonatomic) CNPropertySendMessageAction *sendMessageAction;
@property (readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAction;
@property (readonly, nonatomic) CNPropertyFaceTimeAction *faceTimeAudioAction;
@property (readonly, nonatomic) CNContactAction *shareContactAction;
@property (readonly, nonatomic) CNContactAddFavoriteAction *addFavoriteAction;
@property (readonly, nonatomic) CNContactAction *createReminderAction;
@property (readonly, nonatomic) CNContactAction *shareLocationAction;
@property (readonly, nonatomic) CNContactAction *stopSharingLocationAction;
@property (readonly, nonatomic) CNPropertyLinkedCardsAction *linkedCardsAction;
@property (readonly, nonatomic) CNContactAddLinkedCardAction *addLinkedCardAction;
@property (readonly, nonatomic) CNContactCreateNewContactAction *createNewContactAction;
@property (readonly, nonatomic) CNContactAddToExistingContactAction *addToExistingContactAction;
@property (readonly, nonatomic) CNContactSelectContainersAction *containerSelectionAction;
@property (readonly, nonatomic) CNContactAction *shareWithFamilyAction;
@property (readonly, nonatomic) CNContactAction *stopSharingWithFamilyAction;
@property (readonly, nonatomic) CNContactAction *enableGuardianRestrictionsAction;
@property (readonly, nonatomic) CNContactAction *disableGuardianRestrictionsAction;

- (void).cxx_destruct;
- (id)_faceTimeAction;
- (void)buildCommunicationLimitsActions;
- (id)_addCreateNewContactAction;
- (id)_addFavoriteActionWithConferencing:(BOOL)a0 telephony:(BOOL)a1;
- (id)_addLinkedCardAction;
- (id)_addToExistingContactAction;
- (id)_faceTimeAudioAction;
- (id)_linkedCardsAction;
- (id)_sendMessageActionAllowingEmailIDs:(BOOL)a0;
- (id)_shareContactAction;
- (id)appropriateLocationSharingActionWhenSharing:(BOOL)a0;
- (void)buildAddContactActions;
- (void)buildContainerSelectionAction;
- (void)buildLinkedContactActions;
- (void)buildSharingLocationActionsWithShareLocationController:(id)a0;
- (void)buildStandardActions;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2;
- (id)initWithContact:(id)a0 inContainer:(id)a1 contactStore:(id)a2 propertyGroupsDataSource:(id)a3 actionsDataSource:(id)a4 capabilities:(id)a5 environment:(id)a6;

@end
