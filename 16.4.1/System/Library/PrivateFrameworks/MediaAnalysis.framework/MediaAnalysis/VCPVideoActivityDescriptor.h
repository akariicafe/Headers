@interface VCPVideoActivityDescriptor : NSObject {
    float descriptors[10];
    int _widthInMb;
    int _heightInMb;
    long long *_motionMagnitudeHistogram;
    float *_motionMagnitude;
}

@property (readonly) float *descriptors;

- (void)dealloc;
- (void)reset;
- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats { void /* function */ **x0; BOOL *x1; BOOL *x2; struct MotionVector *x3; struct MotionVector *x4; struct MotionVector *x5; struct MotionVector *x6; unsigned short *x7; unsigned short *x8; unsigned int *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned int x21; BOOL x22; BOOL x23; BOOL x24; int x25; int x26; } *)a0;
- (id)initWithFrameWidthInMb:(int)a0 heightInMb:(int)a1;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)a0;

@end
