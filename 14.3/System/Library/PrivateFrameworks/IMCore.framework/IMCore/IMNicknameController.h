@class NSSet, IMNickname, NSDictionary, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface IMNicknameController : NSObject

@property (retain, nonatomic) IMNickname *personalNickname;
@property (retain, nonatomic) NSMutableArray *fetchPersonalNicknameCompletionBlocks;
@property (retain, nonatomic) NSDictionary *handledNicknames;
@property (retain, nonatomic) NSDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSSet *whitelistedHandlesForSharing;
@property (retain, nonatomic) NSSet *blacklistedHandlesForSharing;
@property (retain, nonatomic) NSMutableSet *scrutinyNicknameHandles;
@property (nonatomic) BOOL isInitialLoad;
@property (retain, nonatomic) NSMutableDictionary *responseHandlers;

+ (id)sharedInstance;
+ (BOOL)accountsMatchUpToUseNicknames;
+ (BOOL)multiplePhoneNumbersTiedToAppleID;

- (id)init;
- (id)contactStore;
- (void).cxx_destruct;
- (void)setPersonalNicknameFromOnboardingResult:(id)a0;
- (id)daemonController;
- (void)clearHandleFromScrutiny:(id)a0;
- (BOOL)shouldOfferNicknameSharingForChat:(id)a0;
- (unsigned long long)nicknameUpdateForHandle:(id)a0 nicknameIfAvailable:(id *)a1;
- (id)handlesForNicknamesUnderScrutiny;
- (void)markHandleUnderScrutiny:(id)a0;
- (void)ignorePendingNicknameUpdatesForHandle:(id)a0;
- (void)clearPendingNicknameUpdatesForHandle:(id)a0;
- (void)whitelistHandlesForNicknameSharing:(id)a0 forChat:(id)a1;
- (void)blacklistHandlesForNicknameSharing:(id)a0;
- (id)nicknameForHandle:(id)a0;
- (void)updatePersonalNickname:(id)a0;
- (BOOL)_nicknameFeatureEnabled;
- (void)fetchPersonalNicknameWithCompletion:(id /* block */)a0;
- (void)updatePersonalNicknameIfNecessaryWithMeCardSharingResult:(id)a0;
- (id)personNameComponentsForHandle:(id)a0;
- (void)updatePendingNicknames:(id)a0 handledNicknames:(id)a1;
- (void)handleSharingListsDidChange;
- (void)updateSharingWhitelist:(id)a0 blacklist:(id)a1;
- (void)nicknameStoreDidChange;
- (void)_updateLocalNicknameStore;
- (void)_broadcastNicknamePreferencesDidChange:(id)a0;
- (void)_updatePersonalNicknameWithMeCardIfNecessary;
- (void)_meCardDidChange:(id)a0;
- (id)_handleIDsForHandle:(id)a0;
- (BOOL)_canUpdatePersonalNickname;
- (BOOL)handleIsWhitelistedForSharing:(id)a0;
- (BOOL)handleIsBlacklistedForSharing:(id)a0;
- (id)getNicknameHandlesUnderScrutiny;
- (void)setNicknameHandlesUnderScrutiny;
- (id)meCardSharingState;
- (id)truncateNameIfNeeded:(id)a0;
- (BOOL)meCardSyncEnabled;
- (id)IMSharedHelperMD5Helper:(id)a0;
- (id)imageDataForHandle:(id)a0;
- (void)markAllAsPending;

@end
