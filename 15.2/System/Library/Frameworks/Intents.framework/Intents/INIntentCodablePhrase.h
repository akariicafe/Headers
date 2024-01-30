@class NSString, INIntentCodableDescription;

@interface INIntentCodablePhrase : NSObject <NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableDescription:) INIntentCodableDescription *_codableDescription;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *pronunciationHintLocID;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *phraseLocID;
@property (readonly, copy, nonatomic) NSString *localizedPhrase;
@property (readonly, copy, nonatomic) NSString *localizedPronunciationHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)localizedPhraseForLanguage:(id)a0;
- (id)localizedPhraseWithLocalizer:(id)a0;
- (id)localizedPronunciationHintForLanguage:(id)a0;
- (id)localizedPronunciationHintWithLocalizer:(id)a0;
- (id)__INCodableDescriptionPronunciationHintIDKey;
- (id)__INCodableDescriptionPronunciationHintKey;
- (id)__INCodableDescriptionPhraseIDKey;
- (id)__INCodableDescriptionPhraseKey;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
