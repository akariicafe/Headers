@class NSNumber, NSString;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic) long long defaultUnit;
@property (nonatomic) long long minimumUnit;
@property (nonatomic) long long maximumUnit;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumUnitKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionMinimumUnitKey;
- (id)__INCodableDescriptionMaximumUnitKey;
- (id)__INTypeCodableDescriptionMaximumUnitKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INCodableDescriptionMinimumUnitKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionMinimumUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;

@end
