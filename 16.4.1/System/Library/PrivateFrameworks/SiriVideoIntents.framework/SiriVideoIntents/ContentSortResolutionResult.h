@interface ContentSortResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedContentSort:(long long)a0;
+ (id)confirmationRequiredWithContentSortToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
