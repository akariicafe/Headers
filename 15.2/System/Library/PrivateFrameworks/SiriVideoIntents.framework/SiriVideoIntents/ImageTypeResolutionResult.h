@interface ImageTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedImageType:(long long)a0;
+ (id)confirmationRequiredWithImageTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
