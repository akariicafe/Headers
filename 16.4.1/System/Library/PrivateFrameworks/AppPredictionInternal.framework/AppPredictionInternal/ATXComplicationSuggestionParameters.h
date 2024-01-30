@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)appsToPriorsMapping;
- (id)modularComplicationsToPriorsMapping;
- (id)fallbackSetsForSet1;
- (id)fallbackSetsForSet2;
- (id)inlineComplicationsToPriorsMapping;
- (id)init;
- (BOOL)alwaysUseFallbackSets;
- (id)fallbackSetsForSet3;
- (void).cxx_destruct;

@end
