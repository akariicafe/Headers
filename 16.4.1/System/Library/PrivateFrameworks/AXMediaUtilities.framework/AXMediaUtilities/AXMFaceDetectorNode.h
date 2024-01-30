@class AXMVisionFaceNameHelper, VNClassifyFaceAttributesRequest, VNDetectFaceLandmarksRequest, VNDetectFacePoseRequest, VNDetectFaceRectanglesRequest, VNDetectFaceExpressionsRequest, VNCreateFaceprintRequest;

@interface AXMFaceDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) AXMVisionFaceNameHelper *_faceNameHelper;
@property (retain, nonatomic) VNDetectFaceRectanglesRequest *_faceRectanglesRequest;
@property (retain, nonatomic) VNCreateFaceprintRequest *_faceprintRequest;
@property (retain, nonatomic) VNClassifyFaceAttributesRequest *_faceAttributesRequest;
@property (retain, nonatomic) VNDetectFaceExpressionsRequest *_faceExpressionsRequest;
@property (retain, nonatomic) VNDetectFaceLandmarksRequest *_faceLandmarksRequest;
@property (retain, nonatomic) VNDetectFacePoseRequest *_facePoseRequest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_createRequestsForContext:(id)a0;
- (id)_faceDetectionResultsForVisionRequests:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)_faceResultForUUID:(id)a0 inFaceDictionary:(id)a1;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
