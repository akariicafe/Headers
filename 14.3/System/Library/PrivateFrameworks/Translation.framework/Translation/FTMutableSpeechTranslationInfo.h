@class FTRecognitionSausage, NSArray;

@interface FTMutableSpeechTranslationInfo : FTSpeechTranslationInfo

@property (copy, nonatomic) FTRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *raw_nbest_choices;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
