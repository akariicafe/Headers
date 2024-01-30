@class NSURL, PIVideoStabilizeRequest;

@interface PXURLVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    NSURL *_inputVideoURL;
    PIVideoStabilizeRequest *_stabilizeRequest;
}

- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id *)a0 analysisType:(out unsigned long long *)a1;
- (id)initWithVideoURL:(id)a0;
- (id)analyticsPayload;

@end
