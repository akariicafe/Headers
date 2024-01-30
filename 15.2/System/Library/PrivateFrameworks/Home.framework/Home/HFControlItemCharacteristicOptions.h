@class NSSet, NAIdentity, NSDictionary, NSString;

@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSSet *allCharacteristicTypes;
@property (readonly, copy, nonatomic) NSSet *allRequiredCharacteristicTypes;
@property (readonly, copy, nonatomic) NSDictionary *characteristicTypesByUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)optionsWithReadWriteCharacteristicTypes:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithCharacteristicTypesByUsage:(id)a0;
- (id)optionsByAddingCharacteristicOptions:(id)a0;
- (id)characteristicTypesForUsage:(unsigned long long)a0;
- (id)optionsByIntersectingWithOptions:(id)a0;
- (id)optionsByAddingCharacteristicTypes:(id)a0 forUsage:(unsigned long long)a1;
- (id)_characteristicTypesForUsagesPassingTest:(id /* block */)a0;
- (id)_optionsByReducingWithOptions:(id)a0 reducer:(id /* block */)a1;

@end
