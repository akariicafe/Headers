@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _CIDVRGBImageQualityAnalyzer : PADVNSerialRequestsScheduler <CIDVRGBImageQualityAnalyzer> {
    id /* block */ _completion;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    NSNumber *_lastIssue;
    unsigned long long _lastIssueCount;
    long long _imageType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)processFrame:(id)a0;
- (id)_errorFromResult:(long long)a0;
- (void)_registerResult:(id)a0;
- (void)_setupForAnalysisWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)_verifyBlurriness:(id)a0;
- (id)_verifyExposure:(id)a0;
- (id)_verifyFaceAttributes:(id)a0;
- (id)_verifyFacePose:(id)a0;
- (id)_verifyFacePosition:(id)a0;
- (void)analyzeObservationComposite:(id)a0;
- (long long)performLightweightCheckWithFaces:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)verifyLightweightQualityForFrame:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)verifyQualityForFrame:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
