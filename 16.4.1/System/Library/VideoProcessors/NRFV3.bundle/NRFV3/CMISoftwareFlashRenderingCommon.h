@interface CMISoftwareFlashRenderingCommon : NSObject

+ (int)calculateEIT:(id)a0 result:(float *)a1;
+ (int)calculateSensorNoiseTable:(id)a0 noiseTable:(float *)a1;
+ (int)getCCT:(id)a0 outputCCT:(float *)a1;
+ (int)getColorCorrectionMatrix:(id)a0 outputMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1 useSoftISPMetadata:(BOOL)a2;
+ (int)getInverseColorCorrectionMatrix:(id)a0 outputMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a1 useSoftISPMetadata:(BOOL)a2;
+ (int)getLensShadingCorrectionMaxGain:(id)a0 outputMaxGain:(float *)a1;
+ (int)getStrobeWhiteBalanceGains:(id)a0 metadata:(id)a1 outputVector:(void *)a2;
+ (int)getWhiteBalanceGains:(id)a0 outputVector:(void *)a1;

@end
