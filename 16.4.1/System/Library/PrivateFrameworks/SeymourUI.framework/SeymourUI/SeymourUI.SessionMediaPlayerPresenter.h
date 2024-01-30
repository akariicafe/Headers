@interface SeymourUI.SessionMediaPlayerPresenter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ dismissalBehavior;
    void /* unknown type, empty encoding */ avPlayerDismissal;
    void /* unknown type, empty encoding */ onTapPlay;
    void /* unknown type, empty encoding */ onTapSettings;
    void /* unknown type, empty encoding */ onTapCollapse;
    void /* unknown type, empty encoding */ onTapExit;
    void /* unknown type, empty encoding */ onTapAirplay;
    void /* unknown type, empty encoding */ onWillStopPictureInPicture;
    void /* unknown type, empty encoding */ onDidStartPictureInPicture;
    void /* unknown type, empty encoding */ onRestoreFromPictureInPicture;
    void /* unknown type, empty encoding */ onDisplayDismissed;
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ audioPlayerPresenter;
    void /* unknown type, empty encoding */ catalogWorkout;
    void /* unknown type, empty encoding */ externalOverlayPresenter;
    void /* unknown type, empty encoding */ keyDeliveryClient;
    void /* unknown type, empty encoding */ mediaPlayer;
    void /* unknown type, empty encoding */ mediaTagStringBuilder;
    void /* unknown type, empty encoding */ nowPlayingUpdater;
    void /* unknown type, empty encoding */ remoteBrowsingSource;
    void /* unknown type, empty encoding */ remoteKeyDeliveryClient;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ sessionOrigin;
    void /* unknown type, empty encoding */ sessionRouteMonitor;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ multiUserClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ currentSessionRouteCategory;
    void /* unknown type, empty encoding */ playbackSnapshot;
    void /* unknown type, empty encoding */ lastForegroundPlaybackSnapshot;
    void /* unknown type, empty encoding */ siriRequestedPlaybackState;
    void /* unknown type, empty encoding */ gymKitConnectionSnapshot;
    void /* unknown type, empty encoding */ shouldResumeSyncPlaybackOnForeground;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isRemoteDisplayConnected;
    void /* unknown type, empty encoding */ currentMusicTrack;
    void /* unknown type, empty encoding */ isShowingMediaMoment;
    void /* unknown type, empty encoding */ outputDeviceChangedObserver;
    void /* unknown type, empty encoding */ outputDevicesChangedObserver;
    void /* unknown type, empty encoding */ multiUserSessionRequiringResync;
    void /* unknown type, empty encoding */ activityTypeBehavior;
    void /* unknown type, empty encoding */ _preventTimeJumpEnabled;
}

- (void)handleAudioInterruptionWithNotification:(id)a0;

@end
