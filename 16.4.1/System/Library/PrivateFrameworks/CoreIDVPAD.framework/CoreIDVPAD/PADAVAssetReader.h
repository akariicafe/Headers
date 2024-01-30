@interface PADAVAssetReader : NSObject

- (id)_frameFromVideo:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)_imageDataFromVideo:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (struct opaqueCMSampleBuffer { } *)_newSampleBufferFromVideo:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)framesFromVideoURL:(id)a0 timestamps:(id)a1 error:(id *)a2;
- (id)framesFromVideoURL:(id)a0 timestamps:(id)a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)imagesFromVideoURL:(id)a0 timestamps:(id)a1 error:(id *)a2;
- (id)imagesFromVideoURL:(id)a0 timestamps:(id)a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;

@end
