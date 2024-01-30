@class _LTTranslationContext, NSString, EARCaesuraSilencePosteriorGenerator, _LTHybridEndpointerAssetInfo, NSDictionary, _EAREndpointer, NSObject, NSNumber, _LTServerEndpointerFeatures;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue;

@interface _LTHybridEndpointer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {
    _LTTranslationContext *_context;
    _LTHybridEndpointerAssetInfo *_asset;
    _EAREndpointer *_sourceEndpointer;
    NSNumber *_sourceEndpointerThreshold;
    NSNumber *_sourceDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_sourceEndpointerFeatures;
    _EAREndpointer *_targetEndpointer;
    NSNumber *_targetEndpointerThreshold;
    NSNumber *_targetDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_targetEndpointerFeatures;
    EARCaesuraSilencePosteriorGenerator *_spg;
    id<_LTSpeechTranslationDelegate> _delegate;
    BOOL _didEndpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_featureQueue;
    unsigned long long _endpointerSignpostID;
}

@property (copy, nonatomic) NSDictionary *endpointerThreshold;
@property (readonly, nonatomic) long long samplingRate;
@property (readonly, nonatomic) long long audioBitDepth;
@property (nonatomic) double clientLagThresholdMs;
@property (nonatomic) double clampedSFLatencyMsForClientLag;
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)didEndpointWithFeatures:(id)a0 silenceFeatures:(id)a1 endpointer:(id)a2;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)startEndpointingWithContext:(id)a0 delegate:(id)a1;
- (void)setServerEndpointerFeatures:(id)a0 withLocale:(id)a1;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;

@end
