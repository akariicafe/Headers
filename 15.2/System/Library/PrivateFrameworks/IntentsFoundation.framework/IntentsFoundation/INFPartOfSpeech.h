@class NSString, NSMutableDictionary;

@interface INFPartOfSpeech : INFSentenceToken {
    NSString *_identifier;
}

@property (retain, nonatomic) NSMutableDictionary *variants;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long partOfSpeechType;
@property (nonatomic) unsigned long long gender;

+ (id)adjectiveWithIdentifier:(id)a0 language:(id)a1;
+ (id)nounWithGender:(unsigned long long)a0 identifier:(id)a1 language:(id)a2;
+ (id)nounWithIdentifier:(id)a0 language:(id)a1;

- (id)identifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0 identifier:(id)a1;
- (id)dictionaryRepresentation;
- (id)stringForContext:(id)a0;
- (id)contributingSentenceContext;
- (id)initWithPartOfSpeechType:(unsigned long long)a0 identifier:(id)a1 language:(id)a2;
- (void)validateSelf;
- (void)setString:(id)a0 forVariants:(unsigned long long)a1;
- (id)stringForVariants:(unsigned long long)a0;
- (void)setString:(id)a0 forVariantsDescriptor:(id)a1;
- (id)stringForVariantsDescriptor:(id)a0;

@end
