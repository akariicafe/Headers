@class MPVolumeController, MPAVRoutingController, NACEventThrottler;
@protocol NACVolumeController;

@interface _NACVolumeObserverRecord : NSObject

@property (nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property (nonatomic) long long volumeWarningState;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) float EUVolumeLimit;
@property (retain, nonatomic) NACEventThrottler *throttler;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) id<NACVolumeController> nacVolumeController;

- (void).cxx_destruct;

@end
