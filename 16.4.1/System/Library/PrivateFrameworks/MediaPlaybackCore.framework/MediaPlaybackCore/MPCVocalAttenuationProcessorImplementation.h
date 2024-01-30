@class MPCVocalAttenuationModel, NSObject;
@protocol OS_dispatch_queue;

@interface MPCVocalAttenuationProcessorImplementation : NSObject {
    struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _timestamp;
    long long _previousContiguousSampleIndex;
    long long _nextContiguousSampleIndex;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_ioBuffer;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
    unsigned int _maxFrames;
    struct OpaqueAudioComponentInstance { } *_processingAU;
    NSObject<OS_dispatch_queue> *_creationQueue;
}

@property (readonly, nonatomic) MPCVocalAttenuationModel *model;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) float level;
@property (readonly, nonatomic) float minLevel;
@property (readonly, nonatomic) float maxLevel;
@property (readonly, nonatomic) double sampleTime;
@property (readonly, nonatomic) double renderingLimit;

- (id)init;
- (void).cxx_destruct;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (BOOL)_setupAudioUnitWithModel:(id)a0 error:(id *)a1;
- (void)_applyAttenuationLevelToAudioUnit;
- (BOOL)_createAudioUnit:(id *)a0;
- (BOOL)_initializeAudioUnit:(id *)a0;
- (void)_prepareWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithMaxAttenuationLevel:(float)a0 audioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 maxFrames:(unsigned int)a2;
- (BOOL)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 maxFrames:(unsigned int)a1;
- (void)prepareWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)processAudioBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 sampleIndex:(long long)a1 numberFrames:(unsigned int)a2 error:(id *)a3;
- (void)resetAudioUnit;

@end
