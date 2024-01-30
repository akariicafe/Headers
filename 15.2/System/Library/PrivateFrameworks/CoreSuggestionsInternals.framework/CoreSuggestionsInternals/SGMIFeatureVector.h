@class SGSimpleMailMessage, NSString, SGSqlEntityStore, NSMutableDictionary, SGMailClientUtil, NSNumber, SGMIBiomeReducedMessageEvents;

@interface SGMIFeatureVector : NSObject {
    NSMutableDictionary *_features;
    SGMailClientUtil *_mailClientUtil;
    SGMIBiomeReducedMessageEvents *_biomeMessageSummary;
    NSNumber *_senderConnectionScore;
}

@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasHashedMessageId;
@property (readonly, nonatomic) NSString *mailboxId;
@property (readonly, nonatomic) SGSimpleMailMessage *mailMessage;
@property (readonly, nonatomic) SGSqlEntityStore *store;

- (id)features;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)a0 hasHashedMessageId:(BOOL)a1 simpleMailMessage:(id)a2 senderConnectionScore:(id)a3 biomeMessageSummary:(id)a4 mailClientUtil:(id)a5 store:(id)a6 preLoadedFeatureNames:(id)a7;
- (id)initWithMessageId:(id)a0 hasHashedMessageId:(BOOL)a1 simpleMailMessage:(id)a2 senderConnectionScore:(id)a3 biomeMessageSummary:(id)a4 store:(id)a5 preLoadedFeatureNames:(id)a6;
- (id)flatVectorForFeatureNames:(id)a0;
- (id)cachedFeature:(long long)a0;
- (id)feature:(long long)a0;
- (void)setFeatureToStringValue:(id)a0 forName:(long long)a1;
- (void)setFeatureToStringArrayValue:(id)a0 forName:(long long)a1;
- (void)setFeatureToNumberValue:(id)a0 forName:(long long)a1;
- (void)setFeatureToNumberArrayValue:(id)a0 forName:(long long)a1;
- (void)ingestFeatures:(id)a0;
- (long long)evaluateFirstMatchAmong:(id)a0 defaultValue:(long long)a1;
- (long long)estimateGroundTruth;
- (long long)estimateGroundTruthWithConfig:(id)a0;
- (id)defaultSaliencyOnError;
- (id)defaultSaliencyOnOverrideFor:(long long)a0;
- (id)saliencyWithScore:(id)a0 isSalient:(BOOL)a1;
- (id)saliencyWithScore:(id)a0 isSalient:(BOOL)a1 gteSaliency:(long long)a2 isCounted:(BOOL)a3;
- (void)logOrStageWithSaliency:(id)a0;

@end
