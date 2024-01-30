@interface PXProactiveSuggester : NSObject

+ (void)updateProactiveSuggestionsFromTimelineEntries:(id)a0 forTimelineSize:(unsigned long long)a1;
+ (id)_proactiveSuggestionsFromTimelineEntries:(id)a0 withClient:(id)a1 forTimelineSize:(unsigned long long)a2;
+ (id)proactiveCriterionForMemory:(id)a0;
+ (id)_clientIDForTimelineSize:(unsigned long long)a0;
+ (unsigned long long)_applicableLayoutForTimelineSize:(unsigned long long)a0;
+ (id)proactiveCriterionForFeaturedPhoto:(id)a0;

@end
