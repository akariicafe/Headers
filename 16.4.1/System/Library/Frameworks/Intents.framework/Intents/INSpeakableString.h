@class NSString, NSArray;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *spokenPhrase;
@property (retain, nonatomic) NSString *pronunciationHint;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *vocabularyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)spokenPhrases;
- (id)string;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_effectiveNSStringValue;
- (id)_initWithVocabularyIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2 alternativeMatches:(id)a3;
- (id)_intents_localizedCopyWithLocalizer:(id)a0;
- (id)initWithIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2;
- (id)initWithIdentifier:(id)a0 string:(id)a1;
- (id)initWithSpokenPhrase:(id)a0;
- (id)initWithVocabularyIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2;

@end
