@interface MPSCPURayIntersector : NSObject

@property (nonatomic) unsigned long long rayDataType;
@property (nonatomic) unsigned long long rayStride;
@property (nonatomic) unsigned long long intersectionDataType;
@property (nonatomic) unsigned long long intersectionStride;

- (id)init;
- (void)getIntersectionsOfType:(unsigned long long)a0 rays:(void *)a1 intersections:(void *)a2 rayCount:(unsigned long long)a3 accelerationStructure:(id)a4;

@end
