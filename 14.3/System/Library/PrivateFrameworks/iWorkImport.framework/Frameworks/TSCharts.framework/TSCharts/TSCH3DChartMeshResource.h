@class TSCH3DChartMeshSharedChildResource;

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource *mShared;
}

+ (id)resourceWithSharedResource:(id)a0;

- (id)get;
- (void)dealloc;
- (unsigned long long)hash;
- (unsigned long long)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (int)caching;
- (void)flushMemory;
- (struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })bufferInfo;
- (id)initWithSharedResource:(id)a0;

@end
