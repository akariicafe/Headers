@class NSURL, NSString;

@interface INCodableURLAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (copy, nonatomic) NSURL *defaultValue;
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
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)encodeWithCoder:(id)a0;

@end
