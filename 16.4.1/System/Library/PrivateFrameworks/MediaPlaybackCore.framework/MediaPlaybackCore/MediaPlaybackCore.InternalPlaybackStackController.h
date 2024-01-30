@class NSDictionary;

@interface MediaPlaybackCore.InternalPlaybackStackController : _TtCs12_SwiftObject <MFStateDumpable, MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentQueueControllerItem;
    void /* unknown type, empty encoding */ loadedQueueControllerItems;
    void /* unknown type, empty encoding */ silentlyFailedItemErrors;
    void /* unknown type, empty encoding */ loadedItemsPool;
    void /* unknown type, empty encoding */ maximumPlayerQueueLength;
    void /* unknown type, empty encoding */ mediaServicesAvailable;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ queueAssetLoader;
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ errorController;
    void /* unknown type, empty encoding */ externalPlaybackController;
    void /* unknown type, empty encoding */ backgroundTaskController;
    void /* unknown type, empty encoding */ playbackDefaults;
    void /* unknown type, empty encoding */ synchronizingToPlayer;
    void /* unknown type, empty encoding */ currentQueueRestorationItem;
    void /* unknown type, empty encoding */ playerItemStateSnapshot;
    void /* unknown type, empty encoding */ throttlingStateMachine;
    void /* unknown type, empty encoding */ transitionController;
    void /* unknown type, empty encoding */ bipBoopPlayer;
    void /* unknown type, empty encoding */ reloadingWithFadeout;
    void /* unknown type, empty encoding */ deferredPlaybackRateForNextSetQueue;
    void /* unknown type, empty encoding */ inFlightSetQueueLoadingContext;
    void /* unknown type, empty encoding */ currentQueueAssetLoadingContext;
    void /* unknown type, empty encoding */ reloadQueueOnGoing;
    void /* unknown type, empty encoding */ stackVersion;
    void /* unknown type, empty encoding */ assetLoadingId;
    void /* unknown type, empty encoding */ playbackStallTimer;
    void /* unknown type, empty encoding */ isSkippingFailedItems;
    void /* unknown type, empty encoding */ isPausedForLeasePrevention;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skipAggregator;
    void /* unknown type, empty encoding */ skippingState;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;

@end
