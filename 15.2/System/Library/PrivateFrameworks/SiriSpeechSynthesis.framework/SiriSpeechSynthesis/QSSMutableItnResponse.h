@class NSString, NSArray;

@interface QSSMutableItnResponse : QSSItnResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *formatted_words_list;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
