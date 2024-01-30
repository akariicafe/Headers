@class NSString;

@interface QSSMutableRequestStatsResponse_BoolStat : QSSRequestStatsResponse_BoolStat

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
