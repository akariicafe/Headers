@class FTRecognitionSausage, NSArray, NSString;

@interface FTMutableSiriTranslationInfo : FTSiriTranslationInfo

@property (copy, nonatomic) FTRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) NSArray *post_itn_tokens;
@property (copy, nonatomic) NSString *post_itn_recognition;
@property (copy, nonatomic) NSArray *itn_alignments;
@property (copy, nonatomic) NSArray *translation_phrase;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
