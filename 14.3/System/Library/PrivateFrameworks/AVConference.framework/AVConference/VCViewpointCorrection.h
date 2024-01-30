@interface VCViewpointCorrection : NSObject {
    struct CVAViewpointCorrection { } *_viewpointCorrectionRef;
}

+ (struct { void /* unknown type, empty encoding */ x0[3]; })intrinsicsFromDeviceFormat:(id)a0;

- (id)init;
- (void)dealloc;
- (int)viewpointCorrectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 faceMesh:(id)a1 activeFormat:(id)a2 enabled:(BOOL)a3;

@end
