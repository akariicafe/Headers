@class NSString, EARCaesuraSilencePosteriorGenerator, NSDictionary, OSDFeatures, NSObject;
@protocol OS_dispatch_queue, OSDAnalyzerDelegate;

@interface OSDAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    unsigned long long _numConsecutiveNonSilenceFrames;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (weak, nonatomic) id<OSDAnalyzerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *osdContext;
@property (retain, nonatomic) OSDFeatures *osdFeatures;
@property (nonatomic) BOOL endOfSpeechDetected;
@property (nonatomic) BOOL startOfSpeechDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endAudio;
- (void).cxx_destruct;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (id)initWithConfigFile:(id)a0 sampleRate:(unsigned long long)a1 context:(id)a2 queue:(id)a3 delegate:(id)a4;
- (id)getCurrentOSDFeatures;
- (void)resetForNewRequestWithContext:(id)a0;

@end
