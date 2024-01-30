@class NSArray, NSDictionary, PSSpecifier, GKLocalPlayer;

@interface GKSettingsFriendListAccess : PSListController

@property (weak, nonatomic) PSSpecifier *globalAccessSpecifier;
@property (retain, nonatomic) NSArray *games;
@property (retain, nonatomic) NSDictionary *gameSettings;
@property (retain, nonatomic) GKLocalPlayer *localPlayer;
@property (nonatomic) BOOL loadingGames;

- (void)applicationWillEnterForeground:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (BOOL)globalFriendListAccess;
- (void)dealloc;
- (void)loadAllGames;
- (BOOL)isFriendListSharingRestricted;
- (void)reloadWithClearLocalCache:(BOOL)a0;
- (id)globalFriendListAccessSpecifier;
- (id)loadingSpecifier;
- (id)individualBundleIDFriendListAccessSpecifier;
- (id)loadFreshSpecifiers;
- (void)setGlobalFriendListAccess:(struct __CFBoolean { } *)a0 withSpecifier:(id)a1;

@end
