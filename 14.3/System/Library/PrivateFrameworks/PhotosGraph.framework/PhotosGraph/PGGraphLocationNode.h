@class NSString;

@interface PGGraphLocationNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (readonly) NSString *fullname;
@property (readonly, weak) PGGraphLocationNode *densestCloseLocationNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)associatedNodesForRemoval;
- (id)addressNodes;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)keywordDescription;
- (unsigned long long)locationMask;
- (id)anyAddressNode;
- (id)parentLocationNodeWithLabel:(id)a0;
- (id)childLocationNodesWithLabel:(id)a0;
- (void)enumerateChildLocationNodesWithLabel:(id)a0 usingBlock:(id /* block */)a1;
- (id)deepParentLocationNodes;

@end
