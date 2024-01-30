@class ATXProactiveSuggestion;

@interface ATXProactiveSuggestionWidgetRotationFeedbackResult : ATXProactiveSuggestionFeedbackResult

@property (readonly, nonatomic) long long engagementType;
@property (readonly, nonatomic) ATXProactiveSuggestion *rotationSuggestion;

- (void).cxx_destruct;
- (id)initWithEngagementType:(long long)a0 rotationSuggestion:(id)a1 consumerSubType:(unsigned char)a2 clientCacheUpdate:(id)a3 uiCacheUpdate:(id)a4 context:(id)a5;

@end
