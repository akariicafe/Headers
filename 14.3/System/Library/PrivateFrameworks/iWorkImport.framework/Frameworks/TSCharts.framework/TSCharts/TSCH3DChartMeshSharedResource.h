@class TSCH3DDataBuffer;

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource

@property (retain, nonatomic) TSCH3DDataBuffer *mesh;

- (id)get;
- (void)dealloc;
- (void)flushMemory;
- (void)setChildRegenerated:(BOOL)a0;

@end
