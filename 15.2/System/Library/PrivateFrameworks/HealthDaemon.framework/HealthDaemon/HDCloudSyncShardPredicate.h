@class NSDate;

@interface HDCloudSyncShardPredicate : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (long long)compare:(id)a0;
- (id)initWithCodableShardPredicate:(id)a0;
- (id)description;
- (id)initForShardType:(int)a0 startDate:(id)a1 endDate:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)codablePredicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
