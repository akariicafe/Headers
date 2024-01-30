@class NSDictionary;

@interface VideoDefringingTuningParameters : NSObject {
    unsigned long long _mode;
    NSDictionary *_tuningParameters;
}

@property (readonly, nonatomic) struct { float radialScale; float radialR0; float radialR1; float radialF0; float radialF1; float radialF2; float max_chroma; float blueTh0; float blueTh1; float blueCrTh0; float brightnessTh0; float brightnessTh1; float contrastTh0; float contrastTh1; float darknessTh0; float darknessTh1; float luma_knee; float luma_amp; float pbrightnessTh0; float pbrightnessTh1; float blueBrightThr0; float blueBrightThr1; float colorfullThr0; float colorfullThr1; float colorfull_PThr0; float colorfull_PThr1; float blueCrThr0; float blueCrThr1; float darkAchromThr0; float darkAchromThr1; float darkAchromCThr; float darkAchromYThr; float darkBlue_YThr0; float darkBlue_YThr1; float darkBlue_CbThr0; float darkBlue_CbThr1; float skyBlue_YThr0; float skyBlue_YThr1; float skyBlue_CbThr0; float skyBlue_CbThr1; float skyBlue_PThr0; float skyBlue_PThr1; float eitThr0; float eitThr1; float awbRatioThr0; float awbRatioThr1; float correctionStrength; float filtThr; float mixFiltLUT; float pCb1; float pCb2; float pCb3; float pCr1; float pCr2; float pCr3; } correctionParams;
@property (readonly, nonatomic) struct { float a0; float a1; float a2; float a3; void /* unknown type, empty encoding */ coefficients; float center_x; float center_y; void /* unknown type, empty encoding */ center; float radius; float minCoefficient; } radialParams;
@property (readonly, nonatomic) struct { float amount; float angle; float cutoff; } desaturationParams;
@property (readonly, nonatomic) BOOL defringingEnabled;

+ (id)_tuningHeaderForMode:(unsigned long long)a0;
+ (BOOL)_validateTuning:(id)a0 mode:(unsigned long long)a1 parameterKey:(id)a2;
+ (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; float x51; float x52; float x53; float x54; })defaultCorrectionParams:(unsigned long long)a0;
+ (struct { float x0; float x1; float x2; })defaultLUTParams:(unsigned long long)a0;
+ (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })defaultRadialParams:(unsigned long long)a0;
+ (id)defaultTuningDictionary;

- (void)setDefaults;
- (void).cxx_destruct;
- (void)setRadialParamsForWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (int)_parseCorrectionTuning:(id)a0;
- (int)_parseDesaturateTuning:(id)a0;
- (int)_parseRadialTuning:(id)a0;
- (id)initWithTuningParameters:(id)a0;
- (int)selectParametersForTuningMode:(unsigned long long)a0;
- (void)setMetadataGain:(float)a0 exposureTime:(float)a1 AWBRGain:(float)a2 AWBBGain:(float)a3;

@end
