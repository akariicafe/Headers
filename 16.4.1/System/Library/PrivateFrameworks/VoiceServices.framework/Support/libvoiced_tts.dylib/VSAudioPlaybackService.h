@class NSError, VSAudioRouteInfo;
@protocol AFAudioPowerProviding, VSAudioPlaybackServiceProtocol;

@interface VSAudioPlaybackService : NSObject

@property (retain, nonatomic) id<VSAudioPlaybackServiceProtocol, AFAudioPowerProviding> implementation;
@property (nonatomic) unsigned long long playbackIntervalId;
@property (retain, nonatomic) id timingObserver;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } asbd;
@property (readonly, nonatomic) VSAudioRouteInfo *outputRouteInfo;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;
@property (readonly, nonatomic) NSError *error;

+ (unsigned long long)bytesOfDuration:(double)a0 withAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
+ (double)durationOfAudioDataLength:(unsigned long long)a0 withAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;

- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void)pause;
- (void)willBeginAccessPower;
- (void)stop;
- (id)start;
- (void).cxx_destruct;
- (id)audioPowerProvider;
- (void)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)flushAndStop;
- (id)initWithAudioSessionID:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 useAVSBAR:(BOOL)a2;
- (void)setBoundaryTimeObserverForTimingInfos:(id)a0 usingBlock:(id /* block */)a1;

@end
