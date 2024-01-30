@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}

- (void)cleanUp;
- (id)requestOptions;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;

@end
