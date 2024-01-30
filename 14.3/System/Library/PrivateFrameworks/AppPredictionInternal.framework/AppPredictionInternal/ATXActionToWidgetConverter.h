@class ATXInfoToBlendingConfidenceMapper, ATXAvocadoDescriptorCache, ATXIntentMetadataCache;

@interface ATXActionToWidgetConverter : NSObject {
    ATXAvocadoDescriptorCache *_descriptorCache;
    ATXIntentMetadataCache *_intentMetadataCache;
    ATXInfoToBlendingConfidenceMapper *_infoConfidenceMapper;
}

+ (id)_widgetsMatchingIntent:(id)a0 pages:(id)a1;
+ (unsigned long long)_layoutOptionsForWidgets:(id)a0;
+ (unsigned long long)_layoutOptionsForSizeClasses:(unsigned long long)a0;

- (id)_widgetSuggestionForExistingWidget:(id)a0 layoutOptions:(unsigned long long)a1 actionSuggestion:(id)a2 action:(id)a3 intent:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (id)suggestionsByConvertingSuggestions:(id)a0 page:(id)a1;
- (id)suggestionsByConvertingSuggestionsForAllPages:(id)a0;
- (id)_widgetSuggestionFromMatchingDescriptorForActionSuggestion:(id)a0 intent:(id)a1 action:(id)a2;
- (id)initWithIntentMetadataCache:(id)a0;
- (id)_suggestionsByConvertingSuggestions:(id)a0 pages:(id)a1;
- (id)_convertedSuggestionIfPossibleFromSuggestion:(id)a0 pages:(id)a1;

@end
