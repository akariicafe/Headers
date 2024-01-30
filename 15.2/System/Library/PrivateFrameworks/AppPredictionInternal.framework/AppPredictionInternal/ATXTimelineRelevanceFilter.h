@interface ATXTimelineRelevanceFilter : NSObject

+ (id)applyLimitsToTimelineSuggestions:(id)a0 forWidget:(id)a1 withTimelineEntryDelegate:(id)a2 abuseControlConfig:(id)a3;
+ (id)filteredAndSortedTimelineEntriesForWidget:(id)a0 entries:(id)a1 withTimelineEntryDelegate:(id)a2 abuseControlConfig:(id)a3;

@end
