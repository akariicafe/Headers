@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject {
    TSCH3DChartMeshResources *_parent;
    struct DataBufferInfo { int componentType; unsigned long long components; unsigned long long count; unsigned long long byteSize; unsigned long long componentByteSize; unsigned long long elementByteSize; } _bufferInfo;
    unsigned long long _resourceIdentifier;
}

@property (nonatomic) BOOL childRegenerated;
@property (readonly) struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } bufferInfo;
@property (nonatomic) int caching;
@property (readonly, nonatomic) unsigned long long resourceIdentifier;

+ (id)resourceWithParent:(id)a0;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)p_clear;

@end
