@interface RecurrenceRuleResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithRecurrenceRuleToConfirm:(id)a0;
+ (id)disambiguationWithRecurrenceRulesToDisambiguate:(id)a0;
+ (id)successWithResolvedRecurrenceRule:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
