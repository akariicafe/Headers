@class NSString;

@interface QSSMutableUserParameters : QSSUserParameters

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *fork_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
