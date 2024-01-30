@interface ATXSpotlightClient : NSObject

+ (BOOL)isAutoShortcutEnabledForSpotlightForBundleId:(id)a0 signature:(id)a1;
+ (id)_resultWithShortcutsActionSuggestion:(id)a0;
+ (BOOL)_topic:(id)a0 isDuplicateComparingTopics:(id)a1;
+ (id)suggestedResultResponseWithLimit:(long long)a0;
+ (id)_accessoryImageWithContextualAction:(id)a0;
+ (id)_resultWithAppClipSuggestion:(id)a0;
+ (id)_topicWithSuggestion:(id)a0 layoutUUID:(id)a1;
+ (id)recentUpcomingMediaActionsWithLimit:(unsigned long long)a0;
+ (id)_responseWithSpotlightLayout:(id)a0 andSpotlightRecentTopics:(id)a1;
+ (id)_responseWithUpcomingMedia;
+ (id)_imageWithContextualActionIcon:(id)a0;
+ (BOOL)_isValidSuggestion:(id)a0 forWorldState:(id)a1;
+ (id)_resultWithActionSuggestion:(id)a0;
+ (BOOL)_isAutoShortcutEnabledForSpotlight:(id)a0;
+ (id)_fetchRecentSpotlightTopics:(long long)a0;
+ (id)_resultWithATXAction:(id)a0;
+ (BOOL)isAutoShortcutsEnabledForSpotlightForBundleId:(id)a0;
+ (id)detailedRowCardSectionWithTitle:(id)a0 subtitles:(id)a1 thumbnail:(id)a2 trailingImage:(id)a3;
+ (id)suggestedResultResponseWithLimit:(long long)a0 andSpotlightRecentTopics:(id)a1;
+ (id)_resultWithSuggestion:(id)a0;
+ (id)_symbolImageForName:(id)a0;
+ (id)_descriptionForTopic:(id)a0;
+ (BOOL)_shouldDisplayUpcomingMediaForTesting;

@end
