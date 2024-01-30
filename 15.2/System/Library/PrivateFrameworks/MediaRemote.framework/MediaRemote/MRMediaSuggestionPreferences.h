@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_globalDisplayPreferencesForContexts;
    NSMutableDictionary *_disabledBundlesForContexts;
}

@property (copy, nonatomic) id /* block */ userDisplayPreferencesDidChangeCallback;
@property (readonly, nonatomic) NSArray *allContexts;

- (BOOL)suggestionsDisabledInContext:(id)a0;
- (id)disabledBundleIdentifiersInContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
