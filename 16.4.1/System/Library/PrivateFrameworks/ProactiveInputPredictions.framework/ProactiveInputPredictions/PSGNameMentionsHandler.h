@interface PSGNameMentionsHandler : NSObject

+ (id)sharedInstance;

- (id)getNameMentionsTriggerForContext:(id)a0 recipientNames:(id)a1 availableApps:(id)a2 localeIdentifier:(id)a3 explanationSet:(id)a4;
- (id)getPredictedItemsForTrigger:(id)a0 recipientNames:(id)a1 bundleIdentifier:(id)a2 maxItems:(unsigned long long)a3;

@end
