@class HKQuantity;

@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) HKQuantity *quantity;

+ (id)intervalDefinitionWithTypeIdentifier:(long long)a0 quantity:(id)a1;
+ (id)definitionFromDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTypeIdentifier:(long long)a0 quantity:(id)a1;
- (id)byChangingType:(long long)a0 quantity:(id)a1;

@end
