@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {
    TSCH3DChartMeshResources *mParent;
    struct DataBufferInfo { int componentType; unsigned long long components; unsigned long long count; unsigned long long byteSize; unsigned long long componentByteSize; unsigned long long elementByteSize; } mBufferInfo;
    unsigned long long mResourceIdentifier;
}

@property (nonatomic) BOOL childRegenerated;
@property (readonly) struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } bufferInfo;
@property (nonatomic) int caching;
@property (readonly, nonatomic) unsigned long long resourceIdentifier;

+ (id)resourceWithParent:(id)a0;

- (void)dealloc;
- (id)initWithParent:(id)a0;
- (id).cxx_construct;
- (void)clearParent;

@end
