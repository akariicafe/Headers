@class TSCH3Dvec3DataBuffer, TSCH3DTexCoordGeneration;

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource

@property (retain, nonatomic) TSCH3Dvec3DataBuffer *vertex;
@property (retain, nonatomic) TSCH3Dvec3DataBuffer *normal;
@property (retain, nonatomic) TSCH3DTexCoordGeneration *generator;

- (id)get;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flushMemory;
- (void)setChildRegenerated:(BOOL)a0;
- (void)setVertex:(id)a0 normal:(id)a1 generator:(id)a2;

@end
