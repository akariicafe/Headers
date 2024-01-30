@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatConversionRequest *independentRequest;
@property (retain) PHMediaFormatConversionRequest *dependentRequest;
@property (copy) id /* block */ successUpdateHandler;

+ (id)requestForSource:(id)a0 destinationCapabilities:(id)a1 error:(id *)a2;
+ (id)chainedRequestForAdjustmentRenderRequest:(id)a0 dependingOnRequest:(id)a1 error:(id *)a2;
+ (id)chainedRequestForRequest:(id)a0 dependingOnRequest:(id)a1 error:(id *)a2 successUpdateHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
