@class WFContentProperty, NSSet;
@protocol NSCopying;

@interface WFContentComparisonPredicate : WFContentPredicate <WFContentPropertyContainer>

@property (readonly, nonatomic) WFContentProperty *property;
@property (readonly, copy, nonatomic) id<NSCopying> value;
@property (readonly, copy, nonatomic) id /* block */ valueBlock;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly, nonatomic) NSSet *containedProperties;

+ (void)initialize;
+ (id)predicateWithValue:(id)a0 forProperty:(id)a1 comparisonType:(unsigned long long)a2;
+ (id)predicateWithValueBlock:(id /* block */)a0 forProperty:(id)a1;
+ (void)registerValueMapping:(id /* block */)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluateWithValues:(id)a0;
- (void)evaluateWithObject:(id)a0 propertySubstitutor:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)initWithValue:(id)a0 valueBlock:(id /* block */)a1 property:(id)a2 comparisonType:(unsigned long long)a3;
- (id)comparableValueForValue:(id)a0;

@end
