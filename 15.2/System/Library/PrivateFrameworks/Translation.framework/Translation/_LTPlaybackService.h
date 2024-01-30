@interface _LTPlaybackService : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    struct OpaqueAudioQueue { } *_audioQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _waitForStateChange;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _stateChangeCondition;
}

@property (readonly, nonatomic) long long state;

- (id)start;
- (void)dealloc;
- (void)reset;
- (void)stop;
- (void)handleMediaServerReset;
- (BOOL)isAudioQueueRunning;
- (void)waitForAudioQueueStop;
- (id)initWithContext:(id)a0 ASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (id)enqueue:(id)a0 packetCount:(long long)a1 packetDescriptions:(id)a2;
- (void)signalQueueRunningStateChanged;
- (void)flushAndStop;

@end
