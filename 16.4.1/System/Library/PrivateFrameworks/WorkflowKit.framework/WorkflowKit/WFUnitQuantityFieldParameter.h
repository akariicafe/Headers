@class NSString, NSDictionary, NSUnit, NSArray;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
    NSArray *_possibleUnits;
}

@property (retain, nonatomic) NSDictionary *unitSymbolMap;
@property (copy, nonatomic) NSString *unitType;
@property (retain, nonatomic) NSUnit *defaultUnit;
@property (nonatomic) BOOL fallbackToAllSupportedUnits;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)availableUnitForStringValue:(id)a0;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)a0;
- (void)updatePossibleUnits;

@end
