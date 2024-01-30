@interface VCPVideoActivityDescriptor : NSObject {
    float descriptors[10];
    int _widthInMb;
    int _heightInMb;
    long long *_motionMagnitudeHistogram;
    float *_motionMagnitude;
}

@property (readonly) float *descriptors;

- (id)initWithFrameWidthInMb:(int)a0 heightInMb:(int)a1;
- (void)reset;
- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats { void /* function */ **x0; BOOL *x1; BOOL *x2; struct MotionVector *x3; struct MotionVector *x4; unsigned short *x5; unsigned short *x6; unsigned int *x7; unsigned short *x8; unsigned short *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned int x19; BOOL x20; BOOL x21; BOOL x22; int x23; int x24; } *)a0;
- (void)dealloc;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)a0;

@end
