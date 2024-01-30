@class NSString, NSCondition;

@interface SFSSAudioPlaybackService : NSObject {
    double _enqueuedSampleCount;
}

@property (retain, nonatomic) NSCondition *audioQueueStateCondition;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) struct OpaqueAudioQueue { } *audioQueue;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) NSString *outputRoute;
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback;

- (void)pause;
- (void)stop;
- (id)start;
- (void).cxx_destruct;
- (void)reset;
- (void)handleMediaServerReset;
- (id)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)flushAndStop;
- (id)initWithAudioSessionID:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (BOOL)isAudioQueueRunning;
- (void)signalQueueRunningStateChange;
- (void)waitForAudioQueueStop;
- (void)waitForQueueRunningStateChange;

@end
