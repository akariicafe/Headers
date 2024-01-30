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
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
