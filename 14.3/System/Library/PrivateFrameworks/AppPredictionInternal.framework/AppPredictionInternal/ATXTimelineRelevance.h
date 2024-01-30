@class NSString, CHSWidget, ATXTimelineAbuseControlConfig, ATXInfoSuggestionCriterionRegistry;
@protocol ATXTimelineRelevanceDelegate;

@interface ATXTimelineRelevance : NSObject {
    CHSWidget *_widget;
    ATXInfoSuggestionCriterionRegistry *_criterionRegistry;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}

@property (weak, nonatomic) id<ATXTimelineRelevanceDelegate> delegate;
@property (readonly, nonatomic) NSString *sourceId;

+ (BOOL)isWidgetFamilyEligibleForSuggestion:(id)a0;
+ (unsigned long long)suggestionLayoutOptionsForAvocadoSizeClass:(long long)a0;

- (void).cxx_destruct;
- (id)initWithWidget:(id)a0 criterionRegistry:(id)a1 abuseControlConfig:(id)a2;
- (id)infoSuggestionsFromTimelineEntries:(id)a0 latestInfoSuggestionRelevantNow:(id)a1;
- (id)generateSuggestionsWithTimelineEntries:(id)a0 latestInfoSuggestionRelevantNow:(id)a1;
- (BOOL)shouldMergeSuggestion:(id)a0 withTimelineEntry:(id)a1;
- (id)infoSuggestionWithStartDate:(id)a0 endDate:(id)a1 relevanceScore:(id)a2;

@end
