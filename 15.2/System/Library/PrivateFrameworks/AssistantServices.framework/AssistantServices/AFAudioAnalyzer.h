@class NSString, NSDictionary, NSMutableData, NSObject;
@protocol AFAudioAnalyzerDelegate, OS_dispatch_queue;

@interface AFAudioAnalyzer : NSObject <Endpointer> {
    BOOL _detectedOneShotStartpoint;
    BOOL _detectedRecurrentStartpoint;
    BOOL _communicatedStartPointDetection;
    BOOL _detectedOneShotEndpoint;
    BOOL _detectedRecurrentEndpoint;
    BOOL _communicatedEndpointDetection;
    BOOL _haveSeenNonZeroSamples;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    double _totalSamples;
    double _lastOneShotStartpoint;
    double _lastOneShotEndpoint;
    double _lastRecurrentStartpoint;
    double _lastRecurrentEndpoint;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    struct OpaqueAudioComponentInstance { } *_audioUnitEPVAD2;
    BOOL _isConfigured;
    BOOL _saveSampleSeenInReset;
    double _previousSamplesSeen;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) long long style;
@property (nonatomic) double delay;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (weak, nonatomic) id<AFAudioAnalyzerDelegate> delegate;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preheat;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 andFrameRate:(unsigned int)a1;
- (void).cxx_destruct;
- (void)_configureWithSampleRate:(double)a0 andFrameRate:(unsigned int)a1;
- (void)_detectVoiceActivityInSamples:(float *)a0 numSamples:(unsigned int)a1;
- (void)saveSamplesSeenOnNextReset;
- (id)init;
- (void)dealloc;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0;
- (void)reset;

@end
