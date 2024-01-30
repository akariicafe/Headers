@class NSString, INCodableLocalizationTable, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *placeholderID;
@property (readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 codableAttribute:(id)a1;
- (id)localizedPlaceholderWithLocalizer:(id)a0;
- (id)__INCodableDescriptionPlaceholderIDKey;
- (id)__INCodableDescriptionPlaceholderKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderKey;
- (id)__INTypeCodableDescriptionPlaceholderKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
- (id)__INTypeCodableDescriptionPlaceholderIDKey;
- (id)initWithCoder:(id)a0;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
