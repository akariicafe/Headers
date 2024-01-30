@interface VideosUI.GroupActivitiesManager : NSObject <VUIGroupActivitiesManagerDelegate> {
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sessionStateObserver;
    void /* unknown type, empty encoding */ sessionActivityObserver;
    void /* unknown type, empty encoding */ sessionActivityParticipantsObserver;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ modifyingActivityIdentifier;
    void /* unknown type, empty encoding */ _isSessionActive;
    void /* unknown type, empty encoding */ metricsDictionary;
    void /* unknown type, empty encoding */ participantsCountMax;
    void /* unknown type, empty encoding */ participantsCount;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ sharedPlayer;
}

@property (nonatomic, readonly) BOOL isEligibleForSession;
@property (nonatomic) BOOL isSessionActive;

- (void)endSession;
- (void)leaveSession;
- (void)playerDidStart:(id)a0;
- (BOOL)isSharedWatchIdValidForCurrentSession:(id)a0;
- (void)startPlaybackFailed;
- (void)requestPermissionToStartCowatchingForPlayable:(id)a0 completion:(id /* block */)a1;
- (void)handleWithWatchTogetherUrl:(id)a0 identifier:(id)a1 startupAction:(long long)a2 previewMetadata:(id)a3 completion:(id /* block */)a4;
- (void)handleSharedPlayable:(id)a0 startupAction:(long long)a1 previewMetadata:(id)a2 completion:(id /* block */)a3;
- (void)handleCommerceSharedWatchUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
