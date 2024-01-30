@class NSString, VGFaceDetection, NSMutableDictionary, NSUserDefaults;

@interface VGFaceEnrollment : NSObject <VGFaceDetectionDelegate> {
    unsigned long long _state;
    VGFaceDetection *_faceDetection;
    NSMutableDictionary *_validImages;
    unsigned long long _lastReason;
    NSUserDefaults *_defaults;
}

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long failure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)images;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_orientationForFaceObservation:(id)a0;
- (id)_croppedImageWithFaceObservation:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (unsigned long long)_currentStateToFetch;
- (BOOL)_validFaceObservation:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)_writeImageFileOnDisk;
- (void)faceDetection:(id)a0 faceObservation:(id)a1 pixelBuffer:(struct __CVBuffer { } *)a2;
- (void)faceDetectionFailed:(id)a0 reason:(unsigned long long)a1;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;

@end
