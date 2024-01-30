@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (copy, nonatomic) NSNumber *defaultValue;
@property (copy, nonatomic) NSString *falseDisplayName;
@property (copy, nonatomic) NSString *falseDisplayNameID;
@property (copy, nonatomic) NSString *trueDisplayName;
@property (copy, nonatomic) NSString *trueDisplayNameID;
@property (readonly, copy, nonatomic) NSString *localizedTrueDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedFalseDisplayName;
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
- (id)localizedTrueDisplayNameWithLocalizer:(id)a0;
- (id)localizedFalseDisplayNameWithLocalizer:(id)a0;
- (id)__INCodableDescriptionFalseDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameKey;
- (id)__INCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
- (id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;

@end
