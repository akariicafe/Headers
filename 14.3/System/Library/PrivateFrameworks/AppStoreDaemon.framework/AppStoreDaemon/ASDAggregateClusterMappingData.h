@interface ASDAggregateClusterMappingData : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _clusterAppCounts;
    struct { int *list; unsigned long long count; unsigned long long size; } _clusterIDs;
    struct { int *list; unsigned long long count; unsigned long long size; } _clusterVersions;
    struct { int *list; unsigned long long count; unsigned long long size; } _weightedAppForgroundUsages;
    struct { int *list; unsigned long long count; unsigned long long size; } _weightedAppLaunches;
}

@property (nonatomic) int encodingVersion;
@property (readonly, nonatomic) unsigned long long clusterIDsCount;
@property (readonly, nonatomic) int *clusterIDs;
@property (readonly, nonatomic) unsigned long long clusterVersionsCount;
@property (readonly, nonatomic) int *clusterVersions;
@property (readonly, nonatomic) unsigned long long clusterAppCountsCount;
@property (readonly, nonatomic) int *clusterAppCounts;
@property (readonly, nonatomic) unsigned long long weightedAppLaunchesCount;
@property (readonly, nonatomic) int *weightedAppLaunches;
@property (readonly, nonatomic) unsigned long long weightedAppForgroundUsagesCount;
@property (readonly, nonatomic) int *weightedAppForgroundUsages;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearClusterIDs;
- (int)clusterIDAtIndex:(unsigned long long)a0;
- (void)addClusterID:(int)a0;
- (void)clearClusterVersions;
- (int)clusterVersionAtIndex:(unsigned long long)a0;
- (void)addClusterVersion:(int)a0;
- (void)clearClusterAppCounts;
- (int)clusterAppCountAtIndex:(unsigned long long)a0;
- (void)addClusterAppCount:(int)a0;
- (void)clearWeightedAppLaunches;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)a0;
- (void)addWeightedAppLaunches:(int)a0;
- (void)clearWeightedAppForgroundUsages;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)a0;
- (void)addWeightedAppForgroundUsage:(int)a0;
- (void)setClusterIDs:(int *)a0 count:(unsigned long long)a1;
- (void)setClusterVersions:(int *)a0 count:(unsigned long long)a1;
- (void)setClusterAppCounts:(int *)a0 count:(unsigned long long)a1;
- (void)setWeightedAppLaunches:(int *)a0 count:(unsigned long long)a1;
- (void)setWeightedAppForgroundUsages:(int *)a0 count:(unsigned long long)a1;

@end
