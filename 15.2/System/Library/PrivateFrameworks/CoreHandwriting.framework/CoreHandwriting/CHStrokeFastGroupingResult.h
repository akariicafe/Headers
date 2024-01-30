@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult

@property (readonly, nonatomic) struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *__begin_; struct CHFastGroupingCluster *__end_; struct __compressed_pair<CHFastGroupingCluster *, std::allocator<CHFastGroupingCluster>> { struct CHFastGroupingCluster *__value_; } __end_cap_; } fastGroupingClusters;

+ (id)_strokeGroupsFromFastGroupingClusters:(const void *)a0 clusteredStrokes:(id)a1 strokeProvider:(id)a2 strategyIdentifier:(id)a3 clutterFilter:(id)a4;
+ (id)_strokeGroupFromSortedStrokeIdentifiers:(id)a0 strokeProvider:(id)a1 strategyIdentifier:(id)a2;
+ (id)_strokeGroupFromFastGroupingCluster:(const void *)a0 strokeProvider:(id)a1 strategyIdentifier:(id)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFastGroupingClusters:(const void *)a0 clusteredStrokes:(id)a1 strokeProvider:(id)a2 strategyIdentifier:(id)a3 clutterFilter:(id)a4;

@end
