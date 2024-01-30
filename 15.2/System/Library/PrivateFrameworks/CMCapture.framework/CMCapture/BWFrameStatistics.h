@class NSString, NSDictionary, NSArray;

@interface BWFrameStatistics : NSObject {
    NSString *_portType;
    NSDictionary *_aeStatistics;
    NSArray *_displayStrobeRGBEstimate;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; float x13; float x14; double x15; unsigned int x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; int x22; BOOL x23; float x24; int x25; BOOL x26; int x27; int x28; int x29; int x30; int x31; int x32; float x33; float x34; unsigned int x35; float x36; int x37; } *_storage;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pts;
@property (readonly, nonatomic) float currentFrameRate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalCropRect;
@property (readonly, nonatomic) double eit;
@property (readonly, nonatomic) unsigned int luxLevel;
@property (readonly, nonatomic) unsigned int conversionGain;
@property (readonly, nonatomic) unsigned int readNoise_1x;
@property (readonly, nonatomic) unsigned int readNoise_8x;
@property (readonly, nonatomic) float normalizedSNR;
@property (readonly, nonatomic) double integrationTime;
@property (readonly, nonatomic) unsigned int agc;
@property (readonly, nonatomic) unsigned int ispDGain;
@property (readonly, nonatomic) unsigned int sensorDGain;
@property (readonly, nonatomic) float ispDGainRangeExpansionFactor;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) float baseISO;
@property (readonly, nonatomic) double exposureBias;
@property (readonly, nonatomic) unsigned int aeAverage;
@property (readonly, nonatomic) unsigned int aeFaceAverage;
@property (readonly, nonatomic) unsigned int aeTarget;
@property (readonly, nonatomic) BOOL aeLimitsReached;
@property (readonly, nonatomic) BOOL aeStable;
@property (readonly, nonatomic) BOOL aeLocked;
@property (readonly, nonatomic) int motionFromAEMatrix;
@property (readonly, nonatomic) NSDictionary *aeStatistics;
@property (readonly, nonatomic) BOOL hrEnabled;
@property (readonly, nonatomic) float sifrGain;
@property (readonly, nonatomic) int afStatus;
@property (readonly, nonatomic) BOOL afLocked;
@property (readonly, nonatomic) int afStationaryCount;
@property (readonly, nonatomic) int focusingMethod;
@property (readonly, nonatomic) int focusPosition;
@property (readonly, nonatomic) int focusPositionStep;
@property (readonly, nonatomic) int logicalFocusLensPosition;
@property (readonly, nonatomic) int logicalFocusLensPositionStep;
@property (readonly, nonatomic) float focusDistance;
@property (readonly, nonatomic) float lensMakersFocusDistance;
@property (readonly, nonatomic) unsigned int motionDataStatus;
@property (readonly, nonatomic) float motionDataBiasErrorEstimate;
@property (readonly, nonatomic) int ltmCurve;
@property (readonly, nonatomic) NSArray *displayStrobeRGBEstimate;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; float x13; float x14; double x15; unsigned int x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; int x22; BOOL x23; float x24; int x25; BOOL x26; int x27; int x28; int x29; int x30; int x31; int x32; float x33; float x34; unsigned int x35; float x36; int x37; } *)frameStatisticsStorage;
- (id)initWthPortType:(id)a0 storage:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; float x13; float x14; double x15; unsigned int x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; int x22; BOOL x23; float x24; int x25; BOOL x26; int x27; int x28; int x29; int x30; int x31; int x32; float x33; float x34; unsigned int x35; float x36; int x37; } *)a1;
- (id)description;
- (void)_setAEStatistics:(id)a0;
- (void)dealloc;
- (void)reset;
- (void)_setDisplayStrobeRGBEstimate:(id)a0;

@end
