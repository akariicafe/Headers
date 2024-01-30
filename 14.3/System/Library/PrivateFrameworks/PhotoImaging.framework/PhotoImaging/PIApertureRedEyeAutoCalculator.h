@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {
    NUFaceDetectionRequest *_faceRequest;
}

- (void)cancel;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)apertureRedEyeResultFromFaceObservations:(id)a0 imageSize:(struct { long long x0; long long x1; })a1;

@end
