@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject {
    PKMetalBuffer *_buffer;
}

@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) id<MTLBuffer> vertexBuffer;

- (id)vertexBuffer;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1 numVertices:(unsigned long long)a2;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;

@end
