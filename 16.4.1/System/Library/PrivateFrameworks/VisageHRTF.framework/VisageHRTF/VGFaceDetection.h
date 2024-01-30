@class VNDetectFaceCaptureQualityRequest, VNClassifyFaceAttributesRequest, VNDetectFaceLandmarksRequest, VNSequenceRequestHandler, VNDetectFaceRectanglesRequest, VNFaceObservation;
@protocol VGFaceDetectionDelegate;

@interface VGFaceDetection : NSObject {
    id<VGFaceDetectionDelegate> _delegate;
    VNDetectFaceRectanglesRequest *_faceDetectionRequest;
    VNClassifyFaceAttributesRequest *_faceAttributesRequest;
    VNDetectFaceCaptureQualityRequest *_faceQualityRequest;
    VNDetectFaceLandmarksRequest *_faceLandmarksRequest;
    VNFaceObservation *_faceObservation;
    VNSequenceRequestHandler *_requestHandler;
}

- (void)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)faceDetectionRequest;
- (long long)_compareFaceObservations:(id)a0 observation:(id)a1;
- (BOOL)_isMouthOpen:(id)a0;
- (void)_performFaceDetectionOnPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_performFaceRequestsIfNeededOnPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_updateEnrollementStatePixelBuffer:(struct __CVBuffer { } *)a0;
- (id)faceAttributesRequest;
- (id)faceLandmarksRequest;
- (id)faceQualityRequest;

@end
