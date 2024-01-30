@interface MPSTriangleAccelerationStructure : MPSPolygonAccelerationStructure

@property (nonatomic) unsigned long long triangleCount;

- (id)initWithDevice:(id)a0;
- (void)setPolygonType:(unsigned long long)a0;
- (id)initWithGroup:(id)a0;

@end
