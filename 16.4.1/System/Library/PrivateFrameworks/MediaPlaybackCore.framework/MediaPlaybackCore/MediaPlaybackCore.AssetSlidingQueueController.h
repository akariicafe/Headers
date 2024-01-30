@class NSDictionary;

@interface MediaPlaybackCore.AssetSlidingQueueController : _TtCs12_SwiftObject <MFStateDumpable, MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentQueueControllerItem;
    void /* unknown type, empty encoding */ maximumPlayerQueueLength;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ assetLoader;
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ errorController;
    void /* unknown type, empty encoding */ externalPlaybackController;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ backgroundTaskController;
    void /* unknown type, empty encoding */ playbackDefaults;
    void /* unknown type, empty encoding */ transitionController;
    void /* unknown type, empty encoding */ assetQueue;
    void /* unknown type, empty encoding */ playerItemStateSnapshot;
    void /* unknown type, empty encoding */ reloadingWithFadeout;
    void /* unknown type, empty encoding */ deferredPlaybackRateForNextSetQueue;
    void /* unknown type, empty encoding */ playbackStallTimer;
    void /* unknown type, empty encoding */ synchronizingToPlayer;
    void /* unknown type, empty encoding */ inFlightSetQueueContext;
    void /* unknown type, empty encoding */ hasSetQueueCompletedSuccessfully;
    void /* unknown type, empty encoding */ lastSetQueueIdentifier;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
