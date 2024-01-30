@class NSArray;

@interface MiroAnalysisAudioHelpers : NSObject {
    struct OpaqueAudioComponentInstance { } *_audioUnitEPVAD;
    struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *_processFormat;
    struct AUOutputBL { struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; char *x1; struct AudioBufferList *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_intAudioBufferList;
    struct AUOutputBL { struct CAStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; char *x1; struct AudioBufferList *x2; unsigned int x3; unsigned int x4; unsigned int x5; } *_floatAudioBufferList;
    struct AUTimestampGenerator { struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x0; double x1; double x2; struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x3; struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; double x9; double x10; BOOL x11; } *_timeGenerator;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentRangeStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recordingStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recordingEndTime;
    BOOL _initializedAudioUnit;
    unsigned int _numberOfSamplesPerBuffer;
    struct LkFsMeasure { unsigned int x0; unsigned int x1; long long x2; BOOL x3; unsigned int x4; unsigned int x5; double x6; double x7; double x8; double x9; long long x10; long long x11; unsigned int x12; unsigned int x13; unsigned int x14; float x15[30][6]; float *x16; float *x17; float *x18; struct DspLibBiquad *x19; struct DspLibBiquad *x20; } *_loudnessAnalyzer;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _momentaryEnergyValues;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _loudnessSampleBuffer;
    float _peakValue;
}

@property (nonatomic) long long projectNaturalFrameRate;
@property (nonatomic) NSArray *timeRanges;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)processAVAsset:(id)a0 options:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_processSamplesForPeaksAndLoudness:(float *)a0 numberOfFrames:(unsigned int)a1 sampleRate:(float)a2;
- (id)_outputVoiceRangeWithDetectionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)_setPropertiesWithNumberOfSamplesPerBuffer:(unsigned int)a0;
- (BOOL)_processFloatBufferWithNumberOfFrames:(long long)a0 options:(unsigned long long)a1 voiceRange:(id *)a2;
- (id)_outputLoudnessRangeWithDetectionTime:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)_setupAndStartReadingTrack:(id)a0 usingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 outputSettings:(id)a2 assetReader:(id *)a3 trackOutput:(id *)a4 error:(id *)a5;
- (BOOL)_startProcessingWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 audioStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 numberOfSamplesPerBuffer:(unsigned int)a2;
- (BOOL)_startVoiceDetection;
- (BOOL)_startLoudnessDetection;
- (BOOL)_processAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(unsigned long long)a1 voiceRange:(id *)a2;
- (void)_stopDetectingVoiceWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 lastVoiceRanges:(id *)a1;
- (void)_stopDetectingLoudnessWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 loudnessRanges:(id *)a1;
- (void)_stopProcessing;

@end
