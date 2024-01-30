@class NSOrderedSet, NSUnit, NSString;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (retain, nonatomic) NSUnit *unit;
@property (retain, nonatomic) NSOrderedSet *defaultUnits;
@property (nonatomic) double defaultValue;
@property (nonatomic) BOOL supportsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)_unitClass;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionUnitKey;
- (id)_unitWithUnitName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_defaultUnitWithNames:(id)a0;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;

@end
