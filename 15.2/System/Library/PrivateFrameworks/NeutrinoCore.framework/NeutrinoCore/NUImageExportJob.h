@class NSData;

@interface NUImageExportJob : NUExportJob {
    NSData *_destinationData;
}

- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)result;
- (BOOL)wantsOutputGeometry;
- (id)renderer:(out id *)a0;
- (BOOL)wantsOutputImage;
- (id)initWithExportRequest:(id)a0;
- (id)initWithImageExportRequest:(id)a0;
- (id)imageExportRequest;
- (id)_filterProperties:(id)a0;
- (id)imageDestinationOptions;
- (id)getOriginalAuxImagesFromNodeGraph:(out id *)a0;
- (struct CGImage { } *)copyCGImageWithIOSurface:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorSpace:(id)a2 error:(out id *)a3;

@end
