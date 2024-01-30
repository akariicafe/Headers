@class NSError, VSAudioRouteInfo;
@protocol AFAudioPowerProviding, VSAudioPlaybackServiceProtocol;

@interface VSAudioPlaybackService : NSObject

@property (retain, nonatomic) id<VSAudioPlaybackServiceProtocol, AFAudioPowerProviding> implementation;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } asbd;
@property (readonly, nonatomic) VSAudioRouteInfo *outputRouteInfo;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;
@property (readonly, nonatomic) NSError *error;

+ (double)durationOfAudioDataLength:(unsigned long long)a0 withAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
+ (unsigned long long)bytesOfDuration:(double)a0 withAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;

- (id)start;
- (void)willBeginAccessPower;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)didEndAccessPower;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)flushAndStop;
- (id)audioPowerProvider;
- (id)initWithAudioSessionID:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 useAVSBAR:(BOOL)a2;

@end
