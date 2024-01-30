@class NSString, NSArray;

@interface FTMutableTextNormalizationResponse : FTTextNormalizationResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSArray *tokens;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
