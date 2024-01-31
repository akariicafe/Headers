@class NSString, AVScrubbingGesturePlatformAdapter, AVScrubbingGestureConfiguration, NSTimer, AVPlayerController, AVObservationController;
@protocol AVScrubbingGestureControllerDelegate;

@interface AVScrubbingGestureController : NSObject <AVScrubbingGesturePlatformAdapterDelegate> {
    AVScrubbingGesturePlatformAdapter *_platformAdapter;
    AVObservationController *_observationController;
    AVScrubbingGestureConfiguration *_gestureConfiguration;
    float _currentScrubRate;
    float _startingMomentumRate;
    float _initialNormalizedTouchTranslation;
    float _initialNormalizedTimelinePosition;
    NSTimer *_scrubMomentumIncrementTimer;
    float _preScrubbingRate;
}

@property (readonly, nonatomic) AVScrubbingGesturePlatformAdapter *platformAdapter;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<AVScrubbingGestureControllerDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL scrubsHaveMomentum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlatformAdapter:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)scrubbingGesturePlatformAdapterDidContinueScrubbing:(id)a0;
- (void)scrubbingGesturePlatformAdapterDidBeginScrubbing:(id)a0;
- (void)scrubbingGesturePlatformAdapterDidEndScrubbing:(id)a0;
- (void).cxx_destruct;
- (BOOL)scrubbingGesturePlatformAdapterIsActivelyScrubbing:(id)a0;
- (id)configurationForScrubbingGesturePlatformAdapter:(id)a0;

@end
