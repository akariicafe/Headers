@class ATXPartialIntentFeedbackManager, NSMutableDictionary;

@interface ATXBiomeHomeScreenSessionProducer : NSObject <ATXBiomeSessionProducerProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *inProgressSessions;
@property (retain, nonatomic) ATXPartialIntentFeedbackManager *partialIntentFeedbackManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)processInteractionContextEvent:(id)a0 withFeedbackRouter:(id)a1;
- (id)initWithInProgressSessions:(id)a0 partialIntentFeedbackManager:(id)a1;
- (void)_updateFeedbackSessionsWithUIContext:(id)a0 feedbackRouter:(id)a1;
- (void)_pruneInProgressSessionsOverMaxLimit;
- (id)_startNewFeedbackSessionForHomeScreenEvent:(id)a0 inProgessSessions:(id)a1;
- (id)_inProgressFeedbackSessionForHomeScreenEvent:(id)a0 inProgessSessions:(id)a1;
- (id)_uuidArrayFromStringArray:(id)a0;
- (id)_endFeedbackSessionForHomeScreenEvent:(id)a0 inProgessSessions:(id)a1;
- (id)_widgetUniqueIdForHomeScreenEvent:(id)a0;
- (BOOL)isEqualToATXBiomeHomeScreenSessionProducer:(id)a0;

@end
