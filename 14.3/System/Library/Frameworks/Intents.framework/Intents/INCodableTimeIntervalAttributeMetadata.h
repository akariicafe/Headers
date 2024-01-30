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

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionMinimumUnitKey;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionUnitKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionMaximumUnitKey;
- (id)__INCodableDescriptionMinimumUnitKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionMaximumUnitKey;
- (id)__INTypeCodableDescriptionMaximumUnitKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionMinimumUnitKey;

@end
