@interface VCSystemAudioCapture : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    struct { struct OpaqueAudioQueue *x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; struct AudioQueueBuffer *x2[10]; unsigned int x3; int x4; } *_audioRecorderQueue;
    int _audioProcessIdToTap;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioBasicDescriptionAudioQueue;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioBasicDescriptionAudioCapture;
    unsigned int _samplesPerFrame;
    void *_sinkContext;
    void /* function */ *_sinkProc;
    BOOL _firstAudioBufferReceived;
    struct opaqueVCAudioBufferList { } *_audioBufferAppendList;
    struct opaqueVCAudioBufferList { } *_audioBufferOutputList;
    double _conversionRatio;
    unsigned int _timestamp;
    double _hostTime;
    double _startHostTime;
}

+ (id)newAudioTapDescriptionForProcess:(int)a0 audioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;

- (BOOL)start;
- (id)initWithConfiguration:(struct { int x0; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x1; void *x2; void /* function */ *x3; } *)a0;
- (void)dealloc;
- (BOOL)stop;

@end
