@class NSString, NSArray;

@interface FTMutableCorrectionsValidatorResponse : FTCorrectionsValidatorResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *corrections;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
