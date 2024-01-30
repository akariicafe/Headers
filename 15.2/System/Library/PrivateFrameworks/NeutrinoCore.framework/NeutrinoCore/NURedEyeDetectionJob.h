@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (void)cleanUp;
- (void).cxx_destruct;
- (id)requestOptions;
- (BOOL)prepare:(out id *)a0;

@end
