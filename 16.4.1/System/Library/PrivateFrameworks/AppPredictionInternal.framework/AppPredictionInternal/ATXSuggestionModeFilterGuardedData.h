@class DNDConfiguration, NSHashTable;

@interface ATXSuggestionModeFilterGuardedData : NSObject {
    NSHashTable *observers;
    DNDConfiguration *configuration;
}

- (void).cxx_destruct;

@end
