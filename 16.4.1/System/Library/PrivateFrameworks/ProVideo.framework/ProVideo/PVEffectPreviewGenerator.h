@interface PVEffectPreviewGenerator : PVRendererBase

+ (id)sharedGenerator;
+ (void)cleanupCaches;

- (id)initWithOptions:(id)a0;
- (void)cancelAllPendingPreviewRequests;
- (void)generatePreviewForEffect:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 inputImage:(struct CGImage { } *)a2 outputSize:(struct CGSize { double x0; double x1; })a3 waitForFinish:(BOOL)a4 completionHandler:(id /* block */)a5;

@end
