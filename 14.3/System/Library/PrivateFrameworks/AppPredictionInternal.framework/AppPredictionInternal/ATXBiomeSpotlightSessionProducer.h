@class ATXPartialIntentFeedbackManager, ATXSpotlightSessionMetadata, ATXFeedbackSession;

@interface ATXBiomeSpotlightSessionProducer : NSObject <ATXBiomeSessionProducerProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXPartialIntentFeedbackManager *partialIntentFeedbackManager;
@property (retain, nonatomic) ATXFeedbackSession *appSession;
@property (retain, nonatomic) ATXFeedbackSession *actionSession;
@property (retain, nonatomic) ATXSpotlightSessionMetadata *sessionMetadata;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)processInteractionContextEvent:(id)a0 withFeedbackRouter:(id)a1;
- (id)initWithAppSession:(id)a0 actionSession:(id)a1 sessionMetadata:(id)a2 partialIntentFeedbackManager:(id)a3;
- (id)_stringArrayToUUIDArray:(id)a0;
- (id)_proactiveSuggestionWithUUID:(id)a0 blendingCacheUUID:(id)a1 context:(id)a2;
- (BOOL)isEqualToATXBiomeSpotlightSessionProducer:(id)a0;

@end
