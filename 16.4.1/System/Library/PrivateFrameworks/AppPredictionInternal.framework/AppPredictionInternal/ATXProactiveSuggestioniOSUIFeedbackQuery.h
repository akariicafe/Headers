@interface ATXProactiveSuggestioniOSUIFeedbackQuery : ATXProactiveSuggestionUIFeedbackQuery

- (id)initWithClientModelIds:(id)a0 consumerSubTypeToConsider:(unsigned char)a1 startDateForResults:(id)a2 bookmarkURLPath:(id)a3;
- (id)uiPublisherForConsumerSubType:(unsigned char)a0 startTime:(double)a1;
- (id)contextPublisherWithStartTime:(double)a0;

@end
