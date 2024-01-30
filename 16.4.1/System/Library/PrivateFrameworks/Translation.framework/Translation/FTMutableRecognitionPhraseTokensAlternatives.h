@class NSArray;

@interface FTMutableRecognitionPhraseTokensAlternatives : FTRecognitionPhraseTokensAlternatives

@property (copy, nonatomic) NSArray *tok_phrases;
@property (nonatomic) BOOL has_unsuggested_alternatives;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
