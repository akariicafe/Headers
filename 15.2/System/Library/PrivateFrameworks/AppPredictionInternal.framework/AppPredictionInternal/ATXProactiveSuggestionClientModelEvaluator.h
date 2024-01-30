@class BPSPublisher;

@interface ATXProactiveSuggestionClientModelEvaluator : NSObject

@property (readonly, nonatomic) BPSPublisher *shadowCandidatePublisher;
@property (readonly, nonatomic) BPSPublisher *uiPublisher;
@property (readonly, nonatomic) BPSPublisher *clientModelCacheUpdatePublisher;

+ (id)eventAndRecentCacheUpdatePublisher:(id)a0;
+ (id)resultFromResults:(id)a0 withSessionType:(unsigned long long)a1 executableType:(long long)a2 removeDockedApps:(BOOL)a3;

- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithShadowCandidatePublisher:(id)a0 uiPublisher:(id)a1 clientModelCacheUpdatePublisher:(id)a2;
- (id)uiPublisherWithDeduplicatedEngagements;
- (id)uiResultForSuggestionExecutableType:(long long)a0 clientModelName:(id)a1 removeDockedApps:(BOOL)a2;
- (id)shadowResultForSuggestionExecutableType:(long long)a0 clientModelName:(id)a1 removeDockedApps:(BOOL)a2;
- (id)resultForClientModelName:(id)a0 suggestionExecutableType:(long long)a1 sessionType:(unsigned long long)a2 removeDockedApps:(BOOL)a3;
- (id)evaluationResultsForClientModelName:(id)a0;

@end
