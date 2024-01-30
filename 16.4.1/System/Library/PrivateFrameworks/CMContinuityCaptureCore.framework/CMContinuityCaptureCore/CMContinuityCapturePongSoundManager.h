@class NSString, CMContinuityCaptureRemoteCompositeDevice, NSObject, CMContinuityCaptureProximityMonitor;
@protocol OS_dispatch_source, OS_dispatch_semaphore;

@interface CMContinuityCapturePongSoundManager : NSObject <CMContinuityCaptureProximityMonitorDelegate> {
    NSString *_playedPongForIdentifier;
    CMContinuityCaptureProximityMonitor *_proximityMonitor;
    NSObject<OS_dispatch_source> *_proximityTimer;
}

@property (readonly, weak, nonatomic) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *audioPlayingResourceSemaphore;

- (void).cxx_destruct;
- (void)_playPongSoundForIdentifier:(id)a0;
- (BOOL)_shouldUseNearbyInteractionToDeterminePongSound;
- (void)device:(id)a0 isNearby:(BOOL)a1;
- (id)initWithCompositeDevice:(id)a0;
- (void)pongIfNeededWithShouldConsiderPongHistory:(BOOL)a0;

@end
