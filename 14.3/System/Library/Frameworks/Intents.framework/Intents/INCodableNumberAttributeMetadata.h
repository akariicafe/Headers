@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)initWithCoder:(id)a0;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;

@end
