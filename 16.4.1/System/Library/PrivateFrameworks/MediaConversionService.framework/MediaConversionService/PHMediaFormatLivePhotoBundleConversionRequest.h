@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) PHMediaFormatLivePhotoConversionRequest *livePhotoConversionRequest;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
