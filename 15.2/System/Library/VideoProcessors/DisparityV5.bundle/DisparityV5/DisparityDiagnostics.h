@class NSMutableDictionary;

@interface DisparityDiagnostics : NSObject {
    NSMutableDictionary *_diagDict;
}

+ (id)dictFromAdaptiveCorrectionStatus:(const struct AdaptiveCorrectionStatus { int x0; BOOL x1; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x2; int x3; BOOL x4; BOOL x5; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x6; double x7; int x8; BOOL x9; double x10; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x11; int x12; BOOL x13; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x14; double x15; int x16; BOOL x17; double x18; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x19; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x20; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x21; int x22; BOOL x23; double x24; int x25; BOOL x26; double x27; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x28; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x29; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x30; } *)a0;
+ (id)dictFromDistortionModel:(const struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a0;
+ (id)dictFromCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a0;

- (void).cxx_destruct;
- (id)init;
- (void)clearDiagnostics;
- (id)createDiagnosticsDictionary;
- (void)addAdaptiveCorrectionStatus:(struct AdaptiveCorrectionStatus { int x0; BOOL x1; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x2; int x3; BOOL x4; BOOL x5; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x6; double x7; int x8; BOOL x9; double x10; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x11; int x12; BOOL x13; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x14; double x15; int x16; BOOL x17; double x18; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x19; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x20; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x21; int x22; BOOL x23; double x24; int x25; BOOL x26; double x27; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x28; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x29; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x30; } *)a0;
- (void)addDisparityDebugStatus:(struct { char x0; char x1; char x2; char x3; float x4; float x5; float x6; float x7; float x8[8]; float x9[8]; float x10[8]; float x11[8]; } *)a0;
- (void)addShiftmapJPEG:(id)a0;
- (void)addShiftmapRaw:(id)a0;
- (void)addMinShift:(float)a0 maxShift:(float)a1;

@end
