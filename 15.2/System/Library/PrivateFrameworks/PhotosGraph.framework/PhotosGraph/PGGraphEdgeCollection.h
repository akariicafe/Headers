@class MAEdgeFilter;

@interface PGGraphEdgeCollection : MAEdgeCollection

@property (class, readonly, nonatomic) Class edgeClass;
@property (class, readonly, nonatomic) MAEdgeFilter *filter;

+ (id)edgesInGraph:(id)a0;
+ (id)edgesOfType:(unsigned long long)a0 onNodes:(id)a1;
+ (id)edgesFromNodes:(id)a0;
+ (id)edgesToNodes:(id)a0;
+ (id)edgesOfType:(unsigned long long)a0 betweenNodes:(id)a1 andNodes:(id)a2;
+ (id)edgesFromNodes:(id)a0 toNodes:(id)a1;

@end
