@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest;

- (void).cxx_destruct;
- (BOOL)prepareWithError:(id *)a0;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
