@interface VCViewpointCorrection : NSObject {
    struct CVAViewpointCorrection { } *_viewpointCorrectionRef;
}

+ (struct { void /* unknown type, empty encoding */ x0[3]; })intrinsicsFromDeviceFormat:(id)a0;

- (void)dealloc;
- (id)init;
- (int)viewpointCorrectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 activeFormat:(id)a1 enabled:(BOOL)a2;

@end
