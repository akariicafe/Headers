@class VCPAudioClassifier, VCPLoudnessAnalyzer, VCPVoiceDetector, VCPSongDetector;

@interface VCPAudioAnalyzer : NSObject {
    void *_inputBuffer;
    struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _audioTimestamp;
    struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } _audioBufferList;
    int _sampleBatchSize;
    VCPVoiceDetector *_voiceDetector;
    VCPAudioClassifier *_audioClassifier;
    VCPLoudnessAnalyzer *_loudnessAnalyzer;
    VCPSongDetector *_songDetector;
    int _bufferedSamples;
    BOOL _initialized;
}

- (int)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)voiceDetections;
- (int)analyzeAsset:(id)a0 cancel:(id /* block */)a1 results:(id *)a2;
- (int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)audioFormatRequirements;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (id)initWithAnalysisTypes:(unsigned long long)a0 forStreaming:(BOOL)a1;
- (int)processAudioSamples:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 timestamp:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })a1;
- (int)setupWithSample:(struct opaqueCMSampleBuffer { } *)a0 andTrackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
