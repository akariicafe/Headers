@protocol ATXProactiveSuggestionClientModelEvaluatorPublishers;

@interface ATXProactiveSuggestionClientModelEvaluator : NSObject

@property (readonly, nonatomic) id<ATXProactiveSuggestionClientModelEvaluatorPublishers> publishers;

+ (id)eventAndRecentCacheUpdatePublisher:(id)a0;
+ (id)resultFromResults:(id)a0 withSessionType:(unsigned long long)a1 executableType:(long long)a2 removeDockedApps:(BOOL)a3;

- (id)initWithPublishers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)evaluationResultsForClientModelName:(id)a0;
- (id)resultForClientModelName:(id)a0 suggestionExecutableType:(long long)a1 sessionType:(unsigned long long)a2 removeDockedApps:(BOOL)a3;
- (id)shadowResultForSuggestionExecutableType:(long long)a0 clientModelName:(id)a1 removeDockedApps:(BOOL)a2;
- (id)uiPublisherWithDeduplicatedEngagements;
- (id)uiResultForSuggestionExecutableType:(long long)a0 clientModelName:(id)a1 removeDockedApps:(BOOL)a2;

@end
