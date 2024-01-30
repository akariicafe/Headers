@class VSSpeechRequest, VSDeviceTTSCore, VSInstrumentMetrics, NSError, NSString;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol>

@property (retain, nonatomic) VSDeviceTTSCore *deviceCore;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) double estimatedDuration;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortTermCachedEngines;
+ (id)shortTermCachedEngineForVoice:(id)a0 voiceResource:(id)a1;

- (id)initWithRequest:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (void)suspend;
- (void)resume;
- (void)cancel;
- (id)taskHash;

@end
