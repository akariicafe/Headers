@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)coercionItemClasses;
- (id)initWithCoercionItemClass:(Class)a0;
- (id)processedContentClasses:(id)a0;

@end
