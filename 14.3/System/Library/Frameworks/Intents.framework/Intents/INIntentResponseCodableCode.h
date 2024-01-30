@class INIntentResponseCodableDescription, NSString, NSArray;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableDescription:) INIntentResponseCodableDescription *_codableDescription;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringLocID;
@property (copy, nonatomic) NSString *conciseFormatString;
@property (copy, nonatomic) NSString *conciseFormatStringLocID;
@property (readonly, nonatomic) NSArray *parameterNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionNameKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionSuccessKey;
- (id)initWithCoder:(id)a0;
- (id)_parameterNamesFromString:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;
- (id)dictionaryRepresentation;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (void)encodeWithCoder:(id)a0;

@end
