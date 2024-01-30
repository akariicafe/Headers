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
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INTypeCodableDescriptionTrueDisplayNameKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
- (id)localizedFalseDisplayNameWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
- (id)__INCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameIDKey;
- (id)__INCodableDescriptionFalseDisplayNameKey;
- (void).cxx_destruct;
- (id)localizedTrueDisplayNameWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
- (id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
- (id)__INTypeCodableDescriptionFalseDisplayNameKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
- (id)__INCodableDescriptionTrueDisplayNameKey;
- (id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;

@end
