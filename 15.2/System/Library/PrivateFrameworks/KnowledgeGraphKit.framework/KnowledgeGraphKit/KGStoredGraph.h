@protocol KGGraphStore;

@interface KGStoredGraph : KGMutableGraph

@property (readonly, nonatomic) id<KGGraphStore> store;

- (id)initGraphWithStore:(id)a0;

@end
