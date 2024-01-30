@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSourceIdentifierRegistered:(id)a0;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;

@end
