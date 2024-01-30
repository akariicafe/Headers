@protocol PLRegionsClusteringItem;

@interface PLRegionsHierarchicalClusteringObject : NSObject

@property (readonly, nonatomic) id<PLRegionsClusteringItem> object;
@property unsigned long long index;

+ (id)clusterObjectWithObject:(id)a0 index:(unsigned long long)a1;

- (void).cxx_destruct;

@end
