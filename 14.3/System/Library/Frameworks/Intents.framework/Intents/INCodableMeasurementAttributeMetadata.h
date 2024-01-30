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

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)_unitWithUnitName:(id)a0;
- (id)_defaultUnitWithNames:(id)a0;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (Class)_unitClass;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionUnitKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;

@end
