@class NSString, AVScrubbingGesturePlatformAdapter, AVScrubbingGestureConfiguration, NSTimer, AVPlayerController, AVObservationController;
@protocol AVScrubbingGestureControllerDelegate;

@interface AVScrubbingGestureController : NSObject <AVScrubbingGesturePlatformAdapterDelegate> {
    AVScrubbingGesturePlatformAdapter *_platformAdapter;
    AVObservationController *_observationController;
    AVScrubbingGestureConfiguration *_gestureConfiguration;
    float _currentScrubRate;
    float _startingMomentumRate;
    NSTimer *_scrubMomentumIncrementTimer;
    float _preScrubbingRate;
}

@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<AVScrubbingGestureControllerDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL scrubsHaveMomentum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configurationForScrubbingGesturePlatformAdapter:(id)a0;
- (void)scrubbingGesturePlatformAdapterDidContinueScrubbing:(id)a0;
- (void)scrubbingGesturePlatformAdapterDidBeginScrubbing:(id)a0;
- (void)dealloc;
- (id)initWithPlatformAdapter:(id)a0;
- (BOOL)scrubbingGesturePlatformAdapterIsActivelyScrubbing:(id)a0;
- (void).cxx_destruct;
- (void)scrubbingGesturePlatformAdapterDidEndScrubbing:(id)a0;
- (void)reset;

@end
