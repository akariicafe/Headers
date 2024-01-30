@class NSString;

@interface FTMutableRequestStatsResponse_BoolStat : FTRequestStatsResponse_BoolStat

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL value;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
