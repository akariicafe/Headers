@class NSMutableArray;

@interface PLOPTICSClusteringObject : NSObject

@property (readonly, nonatomic) id object;
@property unsigned long long index;
@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) NSMutableArray *neighbors;
@property (nonatomic) double coreDistance;
@property (nonatomic) double reachabilityDistance;
@property (nonatomic) BOOL processed;

+ (id)clusterObjectWithObject:(id)a0 index:(unsigned long long)a1 epsilon:(double)a2;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 index:(unsigned long long)a1 epsilon:(double)a2;
- (id)neighborAtIndex:(unsigned long long)a0;
- (void)registerNeighbors:(id)a0 deleteExisting:(BOOL)a1;
- (void)sortNeighborsByDistance;
- (void)updateCoreDistanceForNeighbor:(unsigned long long)a0;

@end
