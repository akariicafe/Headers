@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoercionItemClass:(Class)a0;
- (id)coercionItemClasses;

@end
