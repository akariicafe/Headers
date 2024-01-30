@class NSString;

@interface FTMutableBatchTranslationFeedbackRequest : FTBatchTranslationFeedbackRequest

@property (copy, nonatomic) NSString *source_content;
@property (copy, nonatomic) NSString *translated_content;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *errors;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *safari_version;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *os_version;
@property (copy, nonatomic) NSString *device_type;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
