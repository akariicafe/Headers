@class NSString, VSSpeechSpeakTask;

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask <VSSpeechEagerProtocol>

@property (retain, nonatomic) VSSpeechSpeakTask *speakTask;
@property (nonatomic) BOOL readyForEagerTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSpeaking;
- (id)initWithRequest:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)reportSpeechStart;
- (void)reportTimingInfo;
- (void)setObserverForWordTimings:(id)a0;
- (void)synthesize;

@end
