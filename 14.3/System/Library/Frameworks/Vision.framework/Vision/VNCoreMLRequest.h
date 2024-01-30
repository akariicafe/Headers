@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

@property (readonly, nonatomic) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (Class)configurationClass;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)allowsCachingOfResults;
- (id)initWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)newDefaultRequestInstance;

@end
