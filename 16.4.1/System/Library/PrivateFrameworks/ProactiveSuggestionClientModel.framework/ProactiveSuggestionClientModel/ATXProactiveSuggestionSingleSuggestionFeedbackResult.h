@class ATXProactiveSuggestion;

@interface ATXProactiveSuggestionSingleSuggestionFeedbackResult : ATXProactiveSuggestionFeedbackResult

@property (readonly, nonatomic) long long engagementType;
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion;

- (void).cxx_destruct;
- (id)initWithEngagementType:(long long)a0 suggestion:(id)a1 consumerSubType:(unsigned char)a2 clientCacheUpdate:(id)a3 uiCacheUpdate:(id)a4 context:(id)a5;

@end
