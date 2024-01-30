@interface VNCRImageReaderForDocumentsDetector : VNCRImageReaderDetector

+ (id)imageReaderRecognitionOptionsForProcessOptions:(id)a0;

- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;

@end
