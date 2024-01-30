@class EARCaesuraSilencePosteriorGenerator, NSString, NSObject;
@protocol OS_dispatch_queue, CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (nonatomic) float endpointThreshold;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL isAnalyzeMode;
@property (nonatomic) double lastSilencePosterior;
@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (void)dealloc;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)silenceDurationEstimateAvailable:(float *)a0 numEstimates:(unsigned long long)a1 clientProcessedAudioMs:(float)a2;
- (void)stop;
- (void)start;
- (id)initWithAnalyzeMode;
- (long long)getFrameDurationMs;
- (id)initWithEndpointThreshold:(float)a0;

@end
