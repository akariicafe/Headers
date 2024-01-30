@protocol MTLBuffer;

@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject

@property (readonly, nonatomic) id<MTLBuffer> strokePointBuffer;
@property (readonly, nonatomic) unsigned long long strokePointBufferOffset;
@property (readonly, nonatomic) id<MTLBuffer> liveStrokePointBuffer;
@property (readonly, nonatomic) unsigned long long liveStrokePointBufferOffset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) unsigned long long numPoints;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPoints:(const struct PKMetalPaintStrokePoint { float x0; unsigned short x1 : 16; unsigned short x2 : 16; } *)a0 liveStrokePoints:(const struct PKMetalLiveStrokePaintStrokePoint { float x0; float x1; } *)a1 numPoints:(unsigned long long)a2 numVertices:(unsigned long long)a3 resourceHandler:(id)a4;

@end
