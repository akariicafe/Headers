@class NSString, VSSpeechSpeakTask;

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask <VSSpeechEagerProtocol>

@property (retain, nonatomic) VSSpeechSpeakTask *speakTask;
@property (nonatomic) BOOL readyForEagerTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isSpeaking;
- (void)synthesize;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;

@end
