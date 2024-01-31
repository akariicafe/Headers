@interface NSSQLiteDatabaseStatistics : NSObject <NSCopying>

@property (readonly, nonatomic) long long cacheMissPages;
@property (readonly, nonatomic) long long cacheHitPages;
@property (readonly, nonatomic) long long cacheSpillPages;
@property (readonly, nonatomic) long long totalCachePages;
@property (readonly, nonatomic) long long pageSize;

- (id)copy;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)databaseStatisticsBySubtracting:(id)a0;
- (id)initWithPageSize:(long long)a0;

@end
