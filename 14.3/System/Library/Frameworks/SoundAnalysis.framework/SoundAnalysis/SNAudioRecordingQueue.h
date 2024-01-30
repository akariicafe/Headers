@class AVAudioFormat, SNAudioQueueConfiguration, NSObject;
@protocol OS_os_transaction;

@interface SNAudioRecordingQueue : NSObject {
    struct OpaqueAudioQueue { } *_audioQueue;
    AVAudioFormat *_recordFormat;
    BOOL _running;
    SNAudioQueueConfiguration *_audioQueueConfiguration;
    id /* block */ _clientBufferHandler;
    NSObject<OS_os_transaction> *_transaction;
}

- (void)_stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)handleAudioBufferCallbackForQueue:(struct OpaqueAudioQueue { } *)a0 buffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a1 startTime:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 numberPacketDescriptions:(unsigned int)a3 packetDescriptions:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a4;
- (id)initWithFormat:(id)a0 audioQueueConfiguration:(id)a1;
- (BOOL)startWithBufferHandler:(id /* block */)a0;

@end
