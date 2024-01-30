@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {
    NSArray *_faces;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (id)initWithRequest:(id)a0;
- (id)cacheKey;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithFaceDetectionRequest:(id)a0;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer { } *)a0 maxResultCount:(unsigned long long)a1 error:(out id *)a2;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer { } *)a0 withFaceRects:(id)a1 error:(out id *)a2;

@end
