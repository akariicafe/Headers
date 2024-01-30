@class NSNumber, BPSPublisher;

@interface ATXProactiveSuggestionClientModelEvaluatorPublishers : NSObject <ATXProactiveSuggestionClientModelEvaluatorPublishers>

@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly, copy, nonatomic) NSNumber *endTime;
@property (readonly, nonatomic) BPSPublisher *shadowCandidatePublisher;
@property (readonly, nonatomic) BPSPublisher *uiPublisher;
@property (readonly, nonatomic) BPSPublisher *clientModelCacheUpdatePublisher;

- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;

@end
