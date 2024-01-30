@class AVAudioFormat, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface SNAudioRecordingQueueScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_bufferHandlerQueue;
    id /* block */ _bufferHandler;
    NSObject<OS_os_transaction> *_transaction;
    AVAudioFormat *_recordFormat;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBufferHandler:(id /* block */)a0 queue:(id)a1 recordFormat:(id)a2;
- (void)handleAudioBufferCallbackForQueue:(struct OpaqueAudioQueue { } *)a0 buffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a1 startTime:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 numberPacketDescriptions:(unsigned int)a3 packetDescriptions:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a4;

@end
