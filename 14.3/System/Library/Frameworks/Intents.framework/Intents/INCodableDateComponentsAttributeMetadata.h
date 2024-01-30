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
- (id)__INCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)localizedFormatStringWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTemplateIDKey;
- (id)__INCodableDescriptionTemplateKey;
- (id)__INCodableDescriptionFormatKey;
- (id)__INCodableDescriptionTimeStyleKey;
- (id)__INCodableDescriptionDateStyleKey;
- (id)__INTypeCodableDescriptionTemplateKey;
- (id)__INIntentResponseCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionTemplateIDKey;
- (id)__INIntentResponseCodableDescriptionFormatKey;
- (id)__INTypeCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionDateStyleKey;
- (id)__INTypeCodableDescriptionDateStyleKey;
- (id)__INIntentResponseCodableDescriptionTimeStyleKey;
- (id)__INTypeCodableDescriptionTimeStyleKey;
- (id)__INIntentResponseCodableDescriptionTemplateKey;
- (id)initWithCoder:(id)a0;
- (id)localizedFormatString;
- (id)__INTypeCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;

@end
