@interface ContentTypeResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedContentType:(long long)a0;
+ (id)confirmationRequiredWithContentTypeToConfirm:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
