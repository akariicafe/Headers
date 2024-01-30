@class NSString, NSMutableData, NSDictionary;

@interface CKAudioAnalyzer : NSObject <Endpointer> {
    BOOL _detectedMusic;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    NSMutableData *_floatSampleBuffer;
    unsigned long long _framesSeen;
    struct { float rms; unsigned long long zc; } _frameAnalysisArray[25];
    struct OpaqueAudioComponentInstance { } *_audioUnitEPVAD;
    NSDictionary *_modelDict;
}

@property (nonatomic) unsigned int inMaxSamplesPerBuffer;
@property (nonatomic) float speechPaddingFactor;
@property (nonatomic) float decoderLatency;
@property (nonatomic) float heuristicWindowSec;
@property (nonatomic) float heuristicTransitionRatio;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)configureWithSampleRate:(double)a0 andFrameRate:(unsigned int)a1;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;

@end
