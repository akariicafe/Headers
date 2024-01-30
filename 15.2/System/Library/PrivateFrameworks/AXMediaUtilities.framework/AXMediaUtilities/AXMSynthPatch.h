@class NSArray;

@interface AXMSynthPatch : NSObject {
    double _baseFrequency;
    double _baseAmplitude;
    double *_harmonics;
    double *_amplitudes;
    long long _n;
}

@property (copy, nonatomic) NSArray *harmonicInfos;

+ (id)sawPatch;
+ (id)sinePatch;
+ (id)defaultPatch;
+ (id)squarePatch;
+ (id)trianglePatch;
+ (id)violinPatch;
+ (id)trapeziumPatch;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHarmonics:(id)a0;
- (double)waveformValueForPhase:(double)a0 frequency:(double)a1 amplitude:(double)a2;

@end
