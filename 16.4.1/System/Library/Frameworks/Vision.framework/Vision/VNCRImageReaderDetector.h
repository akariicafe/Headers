@class CRImageReader;

@interface VNCRImageReaderDetector : VNDetector {
    CRImageReader *_imageReader;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)_imageReaderInitializationOptionsForCreationOptions:(id)a0 error:(id *)a1;
+ (id)imageReaderRecognitionOptionsForProcessOptions:(id)a0;
+ (id)supportedLanguagesForProcessOptions:(id)a0 error:(id *)a1;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_observationsForImageReaderOutput:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (id)cachedImageReader;
- (BOOL)isCRImageReaderViableAfterError:(id)a0;
- (id)newImageReaderAndReturnError:(id *)a0;
- (void)setCachedImageReader:(id)a0;

@end
