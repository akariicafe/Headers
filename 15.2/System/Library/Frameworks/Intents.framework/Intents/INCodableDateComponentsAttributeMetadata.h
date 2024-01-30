@class NSString;

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) unsigned long long dateStyle;
@property (readonly, nonatomic) unsigned long long timeStyle;
@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, copy, nonatomic) NSString *formatStringID;

+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionTimeStyleKey;
- (id)__INCodableDescriptionTimeStyleKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionDateStyleKey;
- (id)localizedFormatString;
- (id)__INTypeCodableDescriptionFormatKey;
- (id)__INCodableDescriptionTemplateKey;
- (id)__INIntentResponseCodableDescriptionTemplateKey;
- (id)__INTypeCodableDescriptionTemplateIDKey;
- (id)__INCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionDateStyleKey;
- (id)__INIntentResponseCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)localizedFormatStringWithLocalizer:(id)a0;
- (void).cxx_destruct;
- (id)__INTypeCodableDescriptionTemplateKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionDateStyleKey;
- (id)__INCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionTimeStyleKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;

@end
