@class NSObject, NSString, AXLTTranscriber, AVAudioFile, NSFileHandle, NSDate, AVAudioFormat;
@protocol OS_dispatch_queue, AXLTTranscriberDelegateProtocol;

@interface AXLTAudioOutTranscriber : NSObject {
    struct AudioQueueBuffer *_mBuffers[1];
    BOOL _dumpTestData;
}

@property (retain, nonatomic) AVAudioFormat *tapFormat;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *appID;
@property (retain) NSString *appName;
@property (retain) AXLTTranscriber *transcriber;
@property (weak, nonatomic) id<AXLTTranscriberDelegateProtocol> delegate;
@property (nonatomic) long long audioBuffersAppendedCount;
@property (nonatomic) long long silentSamplesTailCount;
@property (nonatomic) int bufferState;
@property (retain, nonatomic) AVAudioFile *audioFile;
@property (retain, nonatomic) NSString *textFileName;
@property (retain, nonatomic) NSFileHandle *textFile;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSDate *sessionStartTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;
@property (retain, nonatomic) NSDate *bufferLogTime;
@property (retain, nonatomic) NSDate *textLogTime;
@property (nonatomic) long long silentBuffersCount;
@property (nonatomic) struct OpaqueAudioQueue { } *audioQueue;

- (void)cleanup;
- (void).cxx_destruct;
- (void)_appendBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 offsetInPackets:(unsigned int)a1 packetCount:(unsigned int)a2;
- (void)_calcHistogramForBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 packetCount:(unsigned int)a1 isSilence:(BOOL)a2;
- (long long)_findSilencePacketOffset:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 packetCount:(unsigned int)a1 silentSamplesMin:(long long)a2 zeroOffsetOnly:(BOOL)a3;
- (BOOL)_isSilenceOnlyInBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 packetCount:(unsigned int)a1;
- (void)_pauseSpeechRecognition;
- (void)_saveAudioBuffer:(id)a0;
- (void)_saveTranscribedText:(id)a0 withTimeStamp:(id)a1;
- (BOOL)createAudioBuffersWithBufferByteSize:(unsigned int)a0 error:(id *)a1;
- (void)handleAudioBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 audioQueue:(struct OpaqueAudioQueue { } *)a1 timestamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 packetCount:(unsigned int)a3 packetDesc:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a4;
- (id)initWithPID:(int)a0 appID:(id)a1 appName:(id)a2 delegate:(id)a3;
- (void)setupTranscriberIfNeeded;

@end
