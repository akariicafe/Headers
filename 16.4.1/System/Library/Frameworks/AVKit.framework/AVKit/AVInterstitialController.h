@class AVPlayer, AVPlayerInterstitialEventController, AVTimeRange, AVTimeRangeCollection, AVPlayerTimeController, AVObservationController, AVPlayerInterstitialEventMonitor;
@protocol AVInterstitialControllerDelegateManager, NSObject, AVTimeControlling;

@interface AVInterstitialController : NSObject {
    id<NSObject> _playerItemTimeJumpedObserver;
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
@property (readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController;

+ (id)newTimeRangeCollectionForPlayerItem:(id)a0;
+ (id)interstitialQueue;
+ (id)newTimeRangeCollectionForPlayerItem:(id)a0 reversePlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (id)currentItem;
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)a0;
- (void)didPresentInterstitialTimeRange:(id)a0;
- (void)skipInterstitialTimeRange:(id)a0;
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)a0;
- (id)timeRangeForPlayerInterstitialEvent:(id)a0;
- (id)_copySynthesizedInterstitialTimeRanges;
- (BOOL)isLive;
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;
- (id)currentOrEstimatedDate;
- (void)_setPendingTimeBoundary:(double)a0;
- (id)nextInterstitialTimeRange;
- (double)currentTime;
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)a0;
- (void)willPresentInterstitialTimeRange:(id)a0;
- (BOOL)_shouldSkipInterstitialTimeRange:(id)a0;
- (double)elapsedTimeWithinCurrentInterstitial;
- (void)_startObservingInterstitialTimeRanges;
- (double)displayTimeFromTime:(double)a0;
- (double)timeFromDisplayTime:(double)a0;
- (void)dealloc;
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
- (double)elapsedTimeForInterstitialPlayer;
- (BOOL)loadDurationOfCurrentOrNextInterstitialEvent:(id /* block */)a0;
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)a0;
- (double)timeToSeekAfterUserNavigatedFromTime:(double)a0 toTime:(double)a1;
- (id)init;
- (double)_pendingTimeBoundary;
- (void)_stopObservingInterstitialTimeRanges;
- (void)invalidate;
- (void)_updateInterstitialTimeRangeCollection;
- (void).cxx_destruct;
- (void)didBeginOrResumePlayback;
- (void)cancelCurrentPlayerInterstitialEvent;
- (void)updateSynthesizedInterstitialTimeRanges;

@end
