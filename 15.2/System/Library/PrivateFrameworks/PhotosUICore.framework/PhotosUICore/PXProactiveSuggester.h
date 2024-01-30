@interface PXProactiveSuggester : NSObject

+ (id)proactiveCriterionForMemory:(id)a0;
+ (unsigned long long)_applicableLayoutForTimelineSize:(unsigned long long)a0;
+ (void)updateProactiveSuggestionsFromTimelineEntries:(id)a0 forTimelineSize:(unsigned long long)a1;
+ (id)proactiveCriterionForFeaturedPhoto:(id)a0;
+ (id)_clientIDForTimelineSize:(unsigned long long)a0;
+ (id)_proactiveSuggestionsFromTimelineEntries:(id)a0 withClient:(id)a1 forTimelineSize:(unsigned long long)a2;

@end
