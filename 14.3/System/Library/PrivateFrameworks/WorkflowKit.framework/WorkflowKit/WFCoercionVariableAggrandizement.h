@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;

- (id)initWithDictionary:(id)a0;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoercionItemClass:(Class)a0;
- (id)coercionItemClasses;

@end
