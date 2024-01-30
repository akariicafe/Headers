@class CNAutocompleteResultFactory, NSMutableArray;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject {
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
}

@property unsigned long long builtContactType;

+ (id)resultValueForContactPropertyValue:(id)a0 propertyKey:(id)a1 contact:(id)a2;
+ (long long)addressTypeForProperty:(id)a0;
+ (id)localContactBuilderWithResultFactory:(id)a0;
+ (id)suggestedContactBuilderWithResultFactory:(id)a0;
+ (id)serverContactBuilderWithResultFactory:(id)a0;

- (id /* block */)build;
- (void).cxx_destruct;
- (id)initWithResultFactory:(id)a0;
- (id /* block */)makeTransformForProperty:(id)a0;
- (id /* block */)buildAggregateTransform;
- (void)addTransformForProperty:(id)a0;

@end
