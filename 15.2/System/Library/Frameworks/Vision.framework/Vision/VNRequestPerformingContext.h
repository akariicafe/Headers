@class VNRequestForensics, VNImageBuffer, VNRequestPerformer, NSMapTable, VNObservationsCache, VNSession;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {
    unsigned long long _serialNumber;
    VNSession *_session;
    unsigned int _qosClass;
    VNRequestPerformer *_weakRequestPerformer;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}

@property (readonly) unsigned long long serialNumber;
@property (readonly) VNSession *session;

- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4 qosClass:(unsigned int)a5;
- (void)recordSequencedObservationsOfRequest:(id)a0;
- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4;
- (id)cachedObservationsAcceptedByRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)cacheObservationsOfRequest:(id)a0;
- (unsigned int)qosClass;
- (id)requestPerformerAndReturnError:(id *)a0;
- (id)previousSequencedObservationsAcceptedByRequest:(id)a0;
- (id)requestForensics;
- (id)_observationsCacheKeyForRequest:(id)a0;
- (id)imageBufferAndReturnError:(id *)a0;

@end
