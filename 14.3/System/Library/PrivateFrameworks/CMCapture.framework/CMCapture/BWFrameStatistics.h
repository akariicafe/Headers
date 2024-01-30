@class NSString, NSDictionary, NSArray;

@interface BWFrameStatistics : NSObject {
    NSString *_portType;
    NSDictionary *_aeStatistics;
    NSArray *_displayStrobeRGBEstimate;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; double x7; unsigned int x8; unsigned int x9; unsigned int x10; float x11; float x12; float x13; double x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; int x21; BOOL x22; float x23; int x24; BOOL x25; int x26; int x27; int x28; int x29; float x30; float x31; unsigned int x32; float x33; int x34; } *_storage;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } pts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalCropRect;
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
@property (readonly, nonatomic) int logicalFocusLensPosition;
@property (readonly, nonatomic) float focusDistance;
@property (readonly, nonatomic) float lensMakersFocusDistance;
@property (readonly, nonatomic) unsigned int motionDataStatus;
@property (readonly, nonatomic) float motionDataBiasErrorEstimate;
@property (readonly, nonatomic) int ltmCurve;
@property (readonly, nonatomic) NSArray *displayStrobeRGBEstimate;

- (void)dealloc;
- (id)initWthPortType:(id)a0 storage:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; double x7; unsigned int x8; unsigned int x9; unsigned int x10; float x11; float x12; float x13; double x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; int x21; BOOL x22; float x23; int x24; BOOL x25; int x26; int x27; int x28; int x29; float x30; float x31; unsigned int x32; float x33; int x34; } *)a1;
- (id)description;
- (void)_setAEStatistics:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; double x7; unsigned int x8; unsigned int x9; unsigned int x10; float x11; float x12; float x13; double x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; int x21; BOOL x22; float x23; int x24; BOOL x25; int x26; int x27; int x28; int x29; float x30; float x31; unsigned int x32; float x33; int x34; } *)frameStatisticsStorage;
- (void)_setDisplayStrobeRGBEstimate:(id)a0;

@end
