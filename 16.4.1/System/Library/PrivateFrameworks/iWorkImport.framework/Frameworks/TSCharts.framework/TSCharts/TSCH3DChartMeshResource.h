@class TSCH3DChartMeshSharedChildResource;

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource *_shared;
}

+ (id)resourceWithSharedResource:(id)a0;

- (id)get;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (int)caching;
- (struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })bufferInfo;
- (void)flushMemory;
- (id)initWithSharedResource:(id)a0;

@end
