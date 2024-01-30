@class NSObject;
@protocol MPCProcessAudioTapDelegate, OS_dispatch_queue;

@interface MPCProcessAudioTap : NSObject {
    struct OpaqueAudioQueue { } *_processingQueue;
    struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *_monoAudioBuffer;
    int _pid;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) unsigned int numberOfFrames;
@property (weak, nonatomic) id<MPCProcessAudioTapDelegate> delegate;
@property (readonly, nonatomic) unsigned int sampleRate;
@property (readonly, nonatomic) unsigned int numberOfChannels;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (void)_destroyProcessTap;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)tearDownNotifications;
- (id)initWithPID:(int)a0 refreshRate:(id)a1 delegate:(id)a2;
- (void)setupNotifications;
- (void)_createProcessTapWithNumberOfFrames:(unsigned int)a0 sampleRate:(double)a1;
- (id)initWithPID:(int)a0 refreshRate:(id)a1 numberOfChannels:(unsigned int)a2 delegate:(id)a3;
- (id)initWithRefreshRate:(id)a0 delegate:(id)a1;
- (void)mediaServerDidDie:(id)a0;
- (void)mediaServerDidRestart:(id)a0;

@end
