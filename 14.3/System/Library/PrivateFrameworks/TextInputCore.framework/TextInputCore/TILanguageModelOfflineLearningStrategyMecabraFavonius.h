@class TILanguageModelOfflineLearningTask, NSString;

@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy>

@property (readonly) TILanguageModelOfflineLearningTask *learningTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (BOOL)learnMessages:(id)a0 withRecipientRecords:(id)a1;
- (id)filterMessages:(id)a0;
- (void)didFinishLearning;
- (BOOL)incrementUsageCountsForMessages:(id)a0 withAdaptationContext:(id)a1;
- (id)identifyLanguagesForMessages:(id)a0;

@end
