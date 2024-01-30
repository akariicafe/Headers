@class MAEdgeFilter, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
