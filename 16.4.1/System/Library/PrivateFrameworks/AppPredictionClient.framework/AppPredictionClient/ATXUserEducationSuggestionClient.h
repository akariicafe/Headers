@class ATXUserEducationSuggestionConnector, NSHashTable;

@interface ATXUserEducationSuggestionClient : NSObject {
    NSHashTable *_observers;
    ATXUserEducationSuggestionConnector *_connector;
}

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)logUserEducationSuggestionFeedback:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)notifyObserversOfSuggestionEvent:(id)a0;

@end
