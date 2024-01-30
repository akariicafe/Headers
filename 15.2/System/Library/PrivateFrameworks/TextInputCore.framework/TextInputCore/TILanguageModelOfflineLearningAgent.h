@class TILanguageModelOfflineLearningTask, NSObject;
@protocol OS_dispatch_queue;

@interface TILanguageModelOfflineLearningAgent : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) TILanguageModelOfflineLearningTask *currentLearningTask;

+ (void)didFinishLearningWithAgent:(id)a0 task:(id)a1;
+ (id)contactRecordsForRecipients:(id)a0;
+ (id)sharedLearningAgent;

- (void).cxx_destruct;
- (id)init;
- (BOOL)continueLearningTaskWithStrategy:(id)a0;
- (void)performLearningIfNecessaryWithStrategy:(id)a0 lastAdaptationTime:(double)a1;
- (void)performTaskInBackground:(id /* block */)a0;
- (void)handleRemovalOfLearnedModels;

@end
