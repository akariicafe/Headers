@class GKInvite, NSString, GKEventEmitter, UIAlertView, NSInvocation, NSError;
@protocol GKLocalPlayerListenerPrivate;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) GKLocalPlayer *local;
@property (class, readonly) GKLocalPlayer *localPlayer;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ validateAccountCompletionHandler;
@property (retain, nonatomic) UIAlertView *loginAlertView;
@property (nonatomic) UIAlertView *currentAlert;
@property (retain, nonatomic) NSInvocation *currentFriendRequestInvocation;
@property (nonatomic) BOOL didAuthenticate;
@property (nonatomic) BOOL validatingAccount;
@property (nonatomic) BOOL enteringForeground;
@property (nonatomic) BOOL appIsInBackground;
@property (copy, nonatomic) id /* block */ authenticateHandler;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic, getter=isAuthenticating) BOOL authenticating;
@property (nonatomic) BOOL isShowingAuthenticationUI;
@property (nonatomic) unsigned long long authenticationState;
@property (nonatomic) NSError *authenticationError;
@property (nonatomic) BOOL insideAuthenticatorInvocation;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (readonly, nonatomic, getter=isAvatarEditingRestricted) BOOL avatarEditingRestricted;
@property (nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property (nonatomic, getter=isDefaultNickname) BOOL defaultNickname;
@property (nonatomic, getter=isDefaultPrivacyVisibility) BOOL defaultPrivacyVisibility;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) BOOL allowNearbyMultiplayer;
@property (nonatomic, getter=isNewToGameCenter) BOOL newToGameCenter;
@property (readonly, nonatomic) NSString *facebookUserID;
@property (readonly, nonatomic) NSString *iCloudUserID;
@property (readonly, nonatomic, getter=isFindable) BOOL findable;
@property (retain, nonatomic) GKEventEmitter<GKLocalPlayerListenerPrivate> *eventEmitter;
@property (nonatomic, getter=isShowingInGameUI) BOOL showingInGameUI;
@property (nonatomic) BOOL shouldPreserveOnboardingUI;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic) unsigned long long authenticationType;
@property (readonly, nonatomic, getter=isUnderage) BOOL underage;
@property (readonly, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property (readonly, nonatomic, getter=isPersonalizedCommunicationRestricted) BOOL personalizedCommunicationRestricted;

+ (id)authenticatedLocalPlayers;
+ (id)authenticatedLocalPlayersFiltered:(long long)a0;
+ (void)performSync:(id /* block */)a0;
+ (id)authenticatedLocalPlayersWithStatus:(unsigned long long)a0;
+ (void)performAsync:(id /* block */)a0;
+ (id)localPlayerAccessQueue;
+ (id)_localPlayersFromInternals:(id)a0 authenticated:(BOOL)a1;
+ (void)_sendPlayerAuthAPINotificationForLoggedInPlayerInternals:(id)a0 loggedOutPlayerInternals:(id)a1 oldPrimary:(id)a2 newPrimary:(id)a3;
+ (id)localPlayers;
+ (id)localPlayerForCredential:(id)a0;
+ (void)authenticatedLocalPlayersDidChange:(id)a0 complete:(id /* block */)a1;
+ (void)authenticateWithUsername:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;

- (void)reportAuthenticatingWithGreenBuddyInvocation;
- (void)reportAuthenticatingWithAuthKitInvocation;
- (void)signOutWithCompletionHandler:(id /* block */)a0;
- (void)saveGameData:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (void)setStatus:(id)a0;
- (id)friends;
- (void)reportAuthenticationLoginCanceled;
- (void)dealloc;
- (void)createFriendRequestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)loadChallengableFriendsWithCompletionHandler:(id /* block */)a0;
- (void)registerListener:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadRecentPlayersWithCompletionHandler:(id /* block */)a0;
- (void)unregisterListener:(id)a0;
- (void)removeFriend:(id)a0 block:(id /* block */)a1;
- (void)cancelFriendRequestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)updateFromLocalPlayer:(id)a0;
- (void)unregisterAllListeners;
- (id)displayNameWithOptions:(unsigned char)a0;
- (void)deleteSavedGamesWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)a0;
- (void)resolveConflictingSavedGames:(id)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)callAuthHandlerWithError:(id)a0;
- (void)cancelGameInvite:(id)a0;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)setDefaultLeaderboardIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupForCloudSavedGames;
- (void)setStatus:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)promotePlayerInternalToLocalPlayerInternal:(id)a0;
- (void)_loadFriendPlayersWithFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_loadFriendPlayersWithCompletionHandler:(id /* block */)a0;
- (void)_startAuthenticationForExistingPrimaryPlayer;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id /* block */)a0;
- (void)fetchItemsForIdentityVerificationSignature:(id /* block */)a0;
- (void)getPlayerIDFromFriendCode:(id)a0 handler:(id /* block */)a1;
- (void)acceptFriendRequestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (BOOL)scopedIDsArePersistent;
- (void)loadFriendPlayersWithCompletionHandler:(id /* block */)a0;
- (void)loadFriendPlayersWithFilter:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadFriendsWithCompletionHandler:(id /* block */)a0;
- (void)showSettings;
- (void)updateLoginStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeAllFriendsWithBlock:(id /* block */)a0;
- (void)fetchMultiplayerGameInvite;
- (void)fetchTurnBasedEvent;
- (void)fetchCustomTournamentInvite;
- (void)inviteeAcceptedGameInviteWithNotification:(id)a0;
- (void)inviteeDeclinedGameInviteWithNotification:(id)a0;
- (BOOL)hasEmailAddress:(id)a0;
- (void)setDefaultLeaderboardCategoryID:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldDisplayWelcomeBannerForPlayer:(id)a0 lastAuthDate:(id)a1 remoteUI:(BOOL)a2 timeBetweenBanners:(double)a3;
- (BOOL)isWelcomeBannerTooLate;
- (void)reportAuthenticationStartForPlayer;
- (void)reportAuthenticationPlayerAuthenticated;
- (void)reportAuthenticationFailedForPlayer;
- (void)reportAuthenticationErrorNoInternetConnection;

@end
