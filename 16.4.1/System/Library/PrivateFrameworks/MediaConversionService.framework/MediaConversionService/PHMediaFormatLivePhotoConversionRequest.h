@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatConversionRequest *imageConversionRequest;
@property (retain) PHMediaFormatConversionRequest *videoConversionRequest;

+ (id)requestForSource:(id)a0 destinationCapabilities:(id)a1 error:(id *)a2;
+ (id)requestForImageConversionRequest:(id)a0 videoConversionRequest:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)didPreflightSubrequest:(id)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;

@end
