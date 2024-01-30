@class AVAudioConverter, NSMutableDictionary, NSArray, NSCondition, AVAudioSession, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTSWrappedAudioQueue : NSObject <TTSSynthesisProviderAudioOutput> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioQueueLock;
}

@property (nonatomic) struct OpaqueAudioQueue { } *aqRef;
@property (retain, nonatomic) AVAudioFormat *format;
@property (retain, nonatomic) AVAudioFormat *queueFormat;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSCondition *buffersAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueueDispatchQueue;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double lastActiveTime;
@property (nonatomic) BOOL shouldRebuildAudioQueue;
@property BOOL audioQueueActive;
@property (retain, nonatomic) NSMutableDictionary *inflightBuffers;
@property (retain, nonatomic) NSMutableDictionary *availableBuffers;
@property (nonatomic) double currentlyQueuedAudioDuration;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *queueStallTimer;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (retain, nonatomic) NSArray *channels;
@property (retain, nonatomic) AVAudioConverter *cachedAudioConverter;

- (void)setOutputFormat:(id)a0;
- (void)pause;
- (BOOL)isRunning;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (BOOL)play;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)bufferCallback:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (unsigned long long)_minimumBufferByteSize;
- (BOOL)_play;
- (void)_rebuildAudioQueue;
- (void)_reconfigureQueueFormatForMultiChannelOutputIfNecessary;
- (void)_selectChannels:(struct OpaqueAudioQueue { } *)a0;
- (void)_tearDownAudioQueue;
- (id)convertBufferIfNecessary:(id)a0;
- (void)scheduleStallTimer;

@end
