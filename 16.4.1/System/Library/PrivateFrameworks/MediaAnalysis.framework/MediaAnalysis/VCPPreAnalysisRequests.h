@class VNClassifyPotentialLandmarkRequest, VNSceneClassificationRequest, VNGenerateObjectnessBasedSaliencyImageRequest, VNClassifyImageAestheticsRequest, VN6Mb1ME89lyW3HpahkEygIG, VNGenerateAttentionBasedSaliencyImageRequest, VNRecognizeObjectsRequest, VNRecognizeDocumentElementsRequest, VN1JC7R3k4455fKQz0dY1VhQ, VNVYvzEtX1JlUdu8xx5qhDI, VNCreateImageFingerprintsRequest, VNClassifyCityNatureImageRequest, VNClassifyJunkImageRequest, VNCreateSceneprintRequest, VNClassifyMemeImageRequest, VN5kJNH3eYuyaLxNpZr5Z7zi;

@interface VCPPreAnalysisRequests : NSObject

@property (retain, nonatomic) VNClassifyImageAestheticsRequest *aestheticsRequest;
@property (retain, nonatomic) VNSceneClassificationRequest *classificationRequest;
@property (retain, nonatomic) VNCreateSceneprintRequest *sceneprintRequest;
@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *saliencyRequest;
@property (retain, nonatomic) VNClassifyJunkImageRequest *junkImageRequest;
@property (retain, nonatomic) VNRecognizeObjectsRequest *objectRequest;
@property (retain, nonatomic) VNGenerateObjectnessBasedSaliencyImageRequest *saliencyObjectnessRequest;
@property (retain, nonatomic) VNClassifyPotentialLandmarkRequest *landmarkRequest;
@property (retain, nonatomic) VNVYvzEtX1JlUdu8xx5qhDI *nsfwRequest;
@property (retain, nonatomic) VN6Mb1ME89lyW3HpahkEygIG *tabooRequest;
@property (retain, nonatomic) VN5kJNH3eYuyaLxNpZr5Z7zi *semanticRequest;
@property (retain, nonatomic) VNCreateSceneprintRequest *sceneprintRawRequest;
@property (retain, nonatomic) VNClassifyMemeImageRequest *memeRequest;
@property (retain, nonatomic) VN1JC7R3k4455fKQz0dY1VhQ *adjustmentsRequest;
@property (retain, nonatomic) VNRecognizeDocumentElementsRequest *documentRequest;
@property (retain, nonatomic) VNClassifyCityNatureImageRequest *cityNatureRequest;
@property (retain, nonatomic) VNCreateImageFingerprintsRequest *imagefingerprintsRequest;

+ (BOOL)includeRotation;
+ (BOOL)includeDocument;
+ (id)_cachedRequestIdealDimension;
+ (BOOL)includeCN;
+ (BOOL)includeDMF;
+ (BOOL)includeDO;
+ (BOOL)includeIVS;
+ (BOOL)includeJunk;
+ (BOOL)includeLM;
+ (BOOL)includeMeme;
+ (BOOL)includeNSFW;
+ (BOOL)includePA;
+ (BOOL)includeSDG;
+ (BOOL)includeSE;
+ (BOOL)includeSO;
+ (BOOL)includeWP;
+ (BOOL)isDimensionUnknown:(id)a0;
+ (unsigned long long)sharpnessRevision;

- (void).cxx_destruct;
- (id)gatherAvailableRequests;
- (id)mapAvailableRequestsToResolution;

@end
