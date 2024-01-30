@class NSString, NSDictionary, NSUnit, NSArray;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
    NSArray *_possibleUnits;
}

@property (retain, nonatomic) NSDictionary *unitSymbolMap;
@property (copy, nonatomic) NSString *unitType;
@property (retain, nonatomic) NSUnit *defaultUnit;
@property (nonatomic) BOOL fallbackToAllSupportedUnits;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)setPossibleUnits:(id)a0;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (id)possibleUnits;
- (id)availableUnitForStringValue:(id)a0;
- (void)updatePossibleUnits;

@end
