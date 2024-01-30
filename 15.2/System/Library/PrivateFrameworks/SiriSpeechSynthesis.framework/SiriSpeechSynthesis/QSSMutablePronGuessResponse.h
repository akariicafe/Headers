@class NSString, NSArray, QSSVocToken;

@interface QSSMutablePronGuessResponse : QSSPronGuessResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) NSString *apg_id;
@property (copy, nonatomic) QSSVocToken *voc_token;
@property (copy, nonatomic) NSArray *tts_pronunciations;
@property (copy, nonatomic) NSArray *human_readable_prons;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
