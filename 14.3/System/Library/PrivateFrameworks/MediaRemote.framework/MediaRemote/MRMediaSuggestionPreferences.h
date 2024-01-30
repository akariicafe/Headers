@class NSMutableDictionary, NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MRMediaSuggestionPreferences : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSMutableSet *bundlesDisabledInAllContexts;
@property (retain, nonatomic) NSMutableDictionary *globalDisplayPreferencesForContexts;
@property (retain, nonatomic) NSMutableDictionary *disabledBundlesForContexts;
@property (copy, nonatomic) id /* block */ userDisplayPreferencesDidChangeCallback;
@property (readonly, nonatomic) NSArray *allContexts;

- (void)_registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)_updateGlobalToggleState;
- (void)_notifyListener;
- (BOOL)suggestionsDisabledInContext:(id)a0;
- (id)disabledBundleIdentifiersInContext:(id)a0;

@end
