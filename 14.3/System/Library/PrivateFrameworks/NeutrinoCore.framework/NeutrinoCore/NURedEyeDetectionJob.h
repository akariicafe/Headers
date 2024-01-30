@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (void).cxx_destruct;
- (id)requestOptions;
- (void)cleanUp;
- (BOOL)prepare:(out id *)a0;

@end
