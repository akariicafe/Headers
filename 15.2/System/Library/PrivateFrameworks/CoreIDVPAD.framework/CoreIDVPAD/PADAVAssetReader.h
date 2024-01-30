@interface PADAVAssetReader : NSObject

- (id)imagesFromVideoURL:(id)a0 timestamps:(id)a1 error:(id *)a2;
- (id)imagesFromVideoURL:(id)a0 timestamps:(id)a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)_imageDataFromVideo:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 size:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (void)readVideoAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withFrameHandler:(id /* block */)a2 error:(id *)a3;

@end
