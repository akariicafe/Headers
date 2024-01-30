@interface VCVideoFeatureListStringHelper : NSObject

+ (BOOL)findFeatureString:(const char *)a0 value:(char *)a1 valueLength:(unsigned long long)a2 withPrefix:(const char *)a3;
+ (id)newLocalFeaturesStringWithType:(unsigned char)a0;
+ (id)retrieveRawFeaturesStringWithType:(unsigned char)a0;
+ (id)deriveAspectRatioFLS;

@end
