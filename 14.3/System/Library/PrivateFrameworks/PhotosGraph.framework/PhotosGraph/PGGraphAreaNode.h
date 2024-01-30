@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned char isBlacklisted : 1;
@property (readonly) NSString *fullname;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly) NSString *shortenedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addressNodes;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (void)enumerateAddressNodesUsingBlock:(id /* block */)a0;
- (unsigned short)domain;
- (BOOL)diameterIsLargerThanDiameter:(double)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
