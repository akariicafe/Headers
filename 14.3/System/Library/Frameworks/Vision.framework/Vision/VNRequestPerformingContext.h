@class VNRequestForensics, VNImageBuffer, VNRequestPerformer, NSMapTable, VNObservationsCache, VNSession;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {
    VNSession *_session;
    unsigned int _qosClass;
    VNRequestPerformer *_requestPerformer_DO_NOT_DIRECTLY_ACCESS;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}

@property (readonly) VNSession *session;

- (id)cachedObservationsForRequest:(id)a0;
- (void).cxx_destruct;
- (unsigned int)qosClass;
- (BOOL)cacheObservationsForRequest:(id)a0;
- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4 qosClass:(unsigned int)a5;
- (id)_observationsCacheKeyForRequest:(id)a0;
- (id)previousSequencedObservationsForRequest:(id)a0;
- (id)requestForensics;
- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4;
- (BOOL)performDependentRequests:(id)a0 onBehalfOfRequest:(id)a1 error:(id *)a2;
- (void)setModelRequestHandler:(id)a0;
- (id)imageBufferAndReturnError:(id *)a0;
- (void)recordSequencedObservationsForRequest:(id)a0;
- (id)requestPerformerAndReturnError:(id *)a0;
- (id)modelRequestHandlerAndReturnError:(id *)a0;

@end
