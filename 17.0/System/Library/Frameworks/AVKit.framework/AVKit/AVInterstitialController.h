@class AVPlayer, AVPlayerInterstitialEventController, AVTimeRange, AVTimeRangeCollection, AVPlayerTimeController, AVObservationController, AVPlayerInterstitialEventMonitor;
@protocol AVInterstitialControllerDelegateManager, NSObject, AVTimeControlling;

@interface AVInterstitialController : NSObject {
    id<NSObject> _playerItemTimeJumpedObserver;
    id<NSObject> _playerInterstitialPlayerDidChangeObserver;
    id<NSObject> _playerInterstitialEventsChangedObserver;
    id<NSObject> _playerInterstitialCurrentEventChangedObserver;
}

@property (retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor;
@property (retain, nonatomic) AVPlayerInterstitialEventController *eventController;
@property (retain, nonatomic) AVPlayer *interstitialPlayer;
@property (retain, nonatomic) AVObservationController *kvo;
@property (retain, nonatomic) AVObservationController *kvoPlayerItem;
@property (retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress;
@property (retain, nonatomic) id interstitialBoundaryTimeObserver;
@property (retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) id<AVInterstitialControllerDelegateManager> delegateManager;
@property (readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
@property (readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property (readonly, nonatomic) double currentDisplayTime;
@property (readonly, nonatomic) double timeRemainingInCurrentInterstitial;
@property (readonly, nonatomic) double continuationTimeAfterInterstitial;
@property (copy, nonatomic) id /* block */ didEnterInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ didLeaveInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ didLeaveRequiredInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ skipInterstitialTimeRangeBlock;
@property (readonly, nonatomic) BOOL shouldEnforceInterstitialPolicy;
@property (readonly, nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) BOOL shouldAlwaysSkipInterstitials;
@property (readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController;

+ (id)interstitialQueue;
+ (id)newTimeRangeCollectionForPlayerItem:(id)a0;
+ (id)newTimeRangeCollectionForPlayerItem:(id)a0 reversePlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (BOOL)isLive;
- (id)nextInterstitialTimeRange;
- (id)init;
- (void)didPresentInterstitialTimeRange:(id)a0;
- (void)dealloc;
- (id)currentOrEstimatedDate;
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
- (id)currentItem;
- (void)skipInterstitialTimeRange:(id)a0;
- (void)willPresentInterstitialTimeRange:(id)a0;
- (void)invalidate;
- (double)displayTimeFromTime:(double)a0;
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)a0;
- (void)_updateInterstitialTimeRangeCollection;
- (double)_pendingTimeBoundary;
- (void)_startObservingInterstitialTimeRanges;
- (BOOL)loadDurationOfCurrentOrNextInterstitialEvent:(id /* block */)a0;
- (void)didBeginOrResumePlayback;
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;
- (void)_setPendingTimeBoundary:(double)a0;
- (double)timeToSeekAfterUserNavigatedFromTime:(double)a0 toTime:(double)a1;
- (double)elapsedTimeForInterstitialPlayer;
- (id)_copySynthesizedInterstitialTimeRanges;
- (void).cxx_destruct;
- (id)timeRangeForPlayerInterstitialEvent:(id)a0;
- (double)timeFromDisplayTime:(double)a0;
- (double)currentTime;
- (double)elapsedTimeWithinCurrentInterstitial;
- (void)_performInterstitialPlayerDependentUpdates;
- (void)_stopObservingInterstitialTimeRanges;
- (void)cancelCurrentPlayerInterstitialEvent;
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)a0;
- (void)updateSynthesizedInterstitialTimeRanges;
- (BOOL)_shouldSkipInterstitialTimeRange:(id)a0;
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)a0;
- (void)setupInterstitialObservers;
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)a0;

@end
