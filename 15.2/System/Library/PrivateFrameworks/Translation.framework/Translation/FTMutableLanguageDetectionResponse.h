@class NSString, NSArray;

@interface FTMutableLanguageDetectionResponse : FTLanguageDetectionResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSString *detected_locale;
@property (copy, nonatomic) NSArray *predictions;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
