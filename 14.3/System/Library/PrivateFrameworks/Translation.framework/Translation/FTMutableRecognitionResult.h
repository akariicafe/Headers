@class FTRecognitionSausage, NSArray;

@interface FTMutableRecognitionResult : FTRecognitionResult

@property (copy, nonatomic) FTRecognitionSausage *pre_itn;
@property (copy, nonatomic) FTRecognitionSausage *post_itn;
@property (copy, nonatomic) NSArray *pre_itn_nbest_choices;
@property (copy, nonatomic) NSArray *post_itn_nbest_choices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property (copy, nonatomic) NSArray *choice_alignments;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
