@interface EventAvailabilityResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithEventAvailabilityToConfirm:(long long)a0;
+ (id)successWithResolvedEventAvailability:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
