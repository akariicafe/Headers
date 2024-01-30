@interface GameCenterUI.BasePresenter : NSObject {
    void /* unknown type, empty encoding */ playerId;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ isUpdating;
    void /* unknown type, empty encoding */ snapshot;
    void /* unknown type, empty encoding */ onApplySnapshot;
    void /* unknown type, empty encoding */ onUpdatePhaseChange;
    void /* unknown type, empty encoding */ hasShownAuthenticationFlow;
    void /* unknown type, empty encoding */ authenticationPresenter;
}

- (id)init;
- (void).cxx_destruct;

@end
