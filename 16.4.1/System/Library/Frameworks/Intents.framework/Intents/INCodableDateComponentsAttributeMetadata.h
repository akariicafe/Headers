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
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)localizedFormatString;
- (id)__INCodableDescriptionFormatKey;
- (id)__INCodableDescriptionDateStyleKey;
- (id)__INCodableDescriptionTemplateIDKey;
- (id)__INCodableDescriptionTemplateKey;
- (id)__INCodableDescriptionTimeStyleKey;
- (id)__INIntentResponseCodableDescriptionDateStyleKey;
- (id)__INIntentResponseCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionTemplateIDKey;
- (id)__INIntentResponseCodableDescriptionTemplateKey;
- (id)__INIntentResponseCodableDescriptionTimeStyleKey;
- (id)__INTypeCodableDescriptionDateStyleKey;
- (id)__INTypeCodableDescriptionFormatKey;
- (id)__INTypeCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionTemplateKey;
- (id)__INTypeCodableDescriptionTimeStyleKey;
- (id)localizedFormatStringWithLocalizer:(id)a0;

@end
