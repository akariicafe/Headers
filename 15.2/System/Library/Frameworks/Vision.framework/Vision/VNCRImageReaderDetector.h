@class CRImageReader;

@interface VNCRImageReaderDetector : VNDetector {
    CRImageReader *_imageReader;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)imageReaderRecognitionOptionsForProcessOptions:(id)a0;
+ (id)_imageReaderInitializationOptionsForCreationOptions:(id)a0 error:(id *)a1;
+ (id)supportedLanguagesForProcessOptions:(id)a0 error:(id *)a1;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)cachedImageReader;
- (void)setCachedImageReader:(id)a0;
- (BOOL)isCRImageReaderViableAfterError:(id)a0;
- (id)newImageReaderAndReturnError:(id *)a0;
- (id)_observationsForImageReaderOutput:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;

@end
