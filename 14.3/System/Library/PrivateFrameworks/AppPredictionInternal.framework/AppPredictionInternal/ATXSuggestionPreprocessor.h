@class ATXActionToWidgetConverter, ATXEngagementRecordManager, ATXWidgetPrewarmer;

@interface ATXSuggestionPreprocessor : NSObject {
    ATXActionToWidgetConverter *_converter;
    ATXWidgetPrewarmer *_prewarmer;
    ATXEngagementRecordManager *_engagementRecordManager;
}

- (id)preprocessedSuggestionsForMediaControlsConsumer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEngagementRecordManager:(id)a0;
- (id)suggestionsByPreprocessingRankedSuggestions:(id)a0 forConsumerSubType:(unsigned char)a1;

@end
