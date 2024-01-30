@class NSMutableArray, NSString, NSDictionary, NSHashTable, ATXInformationStore, NSObject, ATXHomeScreenCachedSuggestions;
@protocol OS_dispatch_source;

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {
    NSHashTable *observers;
    NSObject<OS_dispatch_source> *rotationSuppressionTimer;
    ATXHomeScreenCachedSuggestions *suppressedSuggestions;
    NSDictionary *currentSuggestionWidgetLayouts;
    NSDictionary *currentAppPredictionPanelLayouts;
    NSDictionary *currentStackSuggestions;
    NSMutableArray *currentFallbacks;
    NSString *currentBlendingCacheId;
    NSMutableArray *stacksAffectedByDebugRotation;
    ATXInformationStore *store;
}

- (void).cxx_destruct;

@end
