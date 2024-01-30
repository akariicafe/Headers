@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;
@protocol NUScalePolicy, NUPurgeableStorage;

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (id)initWithRequest:(id)a0;
- (id)result;
- (id)cacheKey;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithHistogramRequest:(id)a0;
- (id)histogramRequest;

@end
