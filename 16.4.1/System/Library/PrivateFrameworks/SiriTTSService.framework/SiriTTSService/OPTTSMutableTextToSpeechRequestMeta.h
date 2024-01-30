@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (nonatomic) long long channel_type;
@property (copy, nonatomic) NSString *app_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
