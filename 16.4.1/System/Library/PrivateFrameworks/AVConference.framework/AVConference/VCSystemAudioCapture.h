@class CannedAudioInjector;

@interface VCSystemAudioCapture : VCObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    struct { struct OpaqueAudioQueue *x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; struct AudioQueueBuffer *x2[10]; unsigned int x3; int x4; } *_audioRecorderQueue;
    struct tagVCSystemAudioCaptureTapSettings { unsigned int tapType; union { int audioProcessIdToTap; unsigned int sessionTypeToTap; } ; struct __CFString *captureContext; unsigned int source; } _tapSettings;
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
    CannedAudioInjector *_cannedAudioInjector;
    BOOL _useSineWave;
}

+ (unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)a0;
+ (BOOL)isValidConfiguration:(struct { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x3; } *)a0;
+ (id)newAudioTapWithCaptureContext:(struct __CFString { } *)a0 audioFormat:(id)a1;
+ (id)newAudioTapWithProcessID:(int)a0 audioFormat:(id)a1;
+ (id)newAudioTapWithSessionType:(unsigned int)a0 audioFormat:(id)a1;

- (void)dealloc;
- (BOOL)stop;
- (BOOL)start;
- (id)initWithConfiguration:(struct { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x3; } *)a0;
- (id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)setupCannedAudioInjection;

@end
