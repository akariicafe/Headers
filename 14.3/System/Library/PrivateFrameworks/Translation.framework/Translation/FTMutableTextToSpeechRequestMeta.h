@class NSString;

@interface FTMutableTextToSpeechRequestMeta : FTTextToSpeechRequestMeta

@property (nonatomic) long long channel_type;
@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL is_synthesis;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
