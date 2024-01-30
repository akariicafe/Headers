@interface KGEdgeFilter : KGElementFilter

@property (class, readonly, nonatomic) KGEdgeFilter *any;

- (BOOL)matchesEdge:(id)a0;

@end
