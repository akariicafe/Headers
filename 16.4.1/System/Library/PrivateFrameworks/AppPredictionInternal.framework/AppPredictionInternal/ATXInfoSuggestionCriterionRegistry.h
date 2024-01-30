@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
