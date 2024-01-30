@class NSString;

@interface GameCenterUI.PlayerProfilePresenter : NSObject {
    void /* unknown type, empty encoding */ playerId;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ requiredDataPresenter;
    void /* unknown type, empty encoding */ nicknameUpdatedSubscription;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ snapshot;
    void /* unknown type, empty encoding */ onApplySnapshot;
    void /* unknown type, empty encoding */ onUpdatePhaseChange;
    void /* unknown type, empty encoding */ onShowAvatarEditor;
    void /* unknown type, empty encoding */ onNicknameChanged;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL isSignedIn;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ authenticationPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ nicknamePresenter;
@property (nonatomic) void /* unknown type, empty encoding */ isUpdating;

- (id)init;
- (void)setAllowsNearByMultiplayerInvites:(BOOL)a0;
- (void)signIntoGameCenter;
- (void)showAvatarEditor;
- (void)didSignOut;
- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)initWithPlayerId:(id)a0;

@end
