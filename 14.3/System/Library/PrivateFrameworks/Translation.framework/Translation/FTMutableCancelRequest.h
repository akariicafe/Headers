@class NSString;

@interface FTMutableCancelRequest : FTCancelRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *reason;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
