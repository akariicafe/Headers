@interface PXProactiveSuggester : NSObject

+ (id)proactiveCriterionForMemory:(id)a0;
+ (id)proactiveCriterionForFeaturedPhoto:(id)a0;
+ (void)updateProactiveSuggestionsFromTimelineEntries:(id)a0;
+ (id)_proactiveSuggestionsFromTimelineEntries:(id)a0 withClient:(id)a1;

@end
