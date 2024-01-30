@class NSString;

@interface FTMutableUserParameters : FTUserParameters

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *fork_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
