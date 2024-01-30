@class PSGProactiveTrigger, PPQuickTypeBroker, PSGStructuredInfoSuggestionCache;

@interface PSGProactiveTriggerHandler : NSObject {
    PPQuickTypeBroker *_broker;
    PSGStructuredInfoSuggestionCache *_cache;
    PSGProactiveTrigger *_lastTrigger;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)_handleOperationalTrigger:(id)a0 localeIdentifier:(id)a1 bundleIdentifier:(id)a2 recipientNames:(id)a3 availableApps:(id)a4 limit:(unsigned long long)a5 explanationSet:(id)a6 results:(id)a7;
- (id)_handlePortraitTrigger:(id)a0 localeIdentifier:(id)a1 bundleIdentifier:(id)a2 recipients:(id)a3 limit:(unsigned long long)a4 timeoutSeconds:(double)a5 explanationSet:(id)a6 results:(id)a7;
- (id)handleTrigger:(id)a0 localeIdentifier:(id)a1 bundleIdentifier:(id)a2 recipients:(id)a3 recipientNames:(id)a4 availableApps:(id)a5 timeoutSeconds:(double)a6 fetchLimit:(unsigned long long)a7 maxSuggestions:(unsigned long long)a8 explanationSet:(id)a9 error:(id *)a10;
- (id)initWithBroker:(id)a0 cache:(id)a1;

@end
