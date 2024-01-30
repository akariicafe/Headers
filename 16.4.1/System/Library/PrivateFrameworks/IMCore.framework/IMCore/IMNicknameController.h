@class NSSet, IMNickname, NSDictionary, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface IMNicknameController : NSObject

@property (retain, nonatomic) IMNickname *personalNickname;
@property (retain, nonatomic) NSMutableArray *fetchPersonalNicknameCompletionBlocks;
@property (retain, nonatomic) NSDictionary *handledNicknames;
@property (retain, nonatomic) NSDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSSet *allowListedHandlesForSharing;
@property (retain, nonatomic) NSSet *denyListedHandlesForSharing;
@property (retain, nonatomic) NSMutableSet *scrutinyNicknameHandles;
@property (nonatomic) BOOL isInitialLoad;
@property (retain, nonatomic) NSMutableDictionary *responseHandlers;

+ (id)sharedInstance;
+ (BOOL)accountsMatchUpToUseNicknames;
+ (BOOL)multiplePhoneNumbersTiedToAppleID;

- (id)contactStore;
- (void)updatePersonalNickname:(id)a0;
- (id)daemonController;
- (id)nicknameForHandle:(id)a0;
- (id)init;
- (BOOL)_nicknameFeatureEnabled;
- (void).cxx_destruct;
- (void)allowHandlesForNicknameSharing:(id)a0 forChat:(id)a1;
- (void)clearHandleFromScrutiny:(id)a0;
- (void)clearPendingNicknameUpdatesForHandle:(id)a0;
- (void)denyHandlesForNicknameSharing:(id)a0;
- (void)fetchPersonalNicknameWithCompletion:(id /* block */)a0;
- (id)handlesForNicknamesUnderScrutiny;
- (void)ignorePendingNicknameUpdatesForHandle:(id)a0;
- (void)markHandleUnderScrutiny:(id)a0;
- (unsigned long long)nicknameUpdateForHandle:(id)a0 nicknameIfAvailable:(id *)a1;
- (void)setPersonalNicknameFromOnboardingResult:(id)a0;
- (BOOL)shouldOfferNicknameSharingForChat:(id)a0;
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)a0;
- (id)IMSharedHelperMD5Helper:(id)a0;
- (id)getNicknameHandlesUnderScrutiny;
- (void)setNicknameHandlesUnderScrutiny;
- (void)_broadcastNicknamePreferencesDidChange:(id)a0;
- (BOOL)_canUpdatePersonalNickname;
- (id)_handleIDsForHandle:(id)a0;
- (void)_meCardDidChange:(id)a0;
- (void)_updateLocalNicknameStore;
- (void)_updatePersonalNicknameWithMeCardIfNecessary;
- (BOOL)handleIsAllowedForSharing:(id)a0;
- (BOOL)handleIsDeniedForSharing:(id)a0;
- (void)handleSharingListsDidChange;
- (id)imageDataForHandle:(id)a0;
- (void)markAllAsPending;
- (id)meCardSharingState;
- (BOOL)meCardSyncEnabled;
- (void)nicknameStoreDidChange;
- (id)personNameComponentsForHandle:(id)a0;
- (id)truncateNameIfNeeded:(id)a0;
- (void)updatePendingNicknames:(id)a0 handledNicknames:(id)a1;
- (void)updateSharingAllowList:(id)a0 denyList:(id)a1;

@end
