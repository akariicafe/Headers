@class NSString, FTRecognitionSausage, NSArray;

@interface FTMutableKeywordFinderResponse : FTKeywordFinderResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTRecognitionSausage *corrected_sausage;
@property (copy, nonatomic) NSArray *n_best_list;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
