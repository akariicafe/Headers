@interface VCVideoFeatureListStringHelper : NSObject

+ (int)defaultPayload:(struct __CFDictionary { } *)a0;
+ (id)newLocalFeaturesStringWithType:(unsigned char)a0;
+ (void)aspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 landscape:(struct CGSize { double x0; double x1; } *)a1 isMismatchedOrientation:(BOOL)a2;
+ (id)deriveAspectRatioFLS;
+ (id)deriveAspectRatioFLSWithPortraitRatio:(struct CGSize { double x0; double x1; })a0 landscapeRatio:(struct CGSize { double x0; double x1; })a1 expectedPortraitRatio:(struct CGSize { double x0; double x1; })a2 expectedLandscapeRatio:(struct CGSize { double x0; double x1; })a3;
+ (BOOL)extractAspectRatios:(const char *)a0 landscapeX:(int *)a1 landscapeY:(int *)a2 portraitX:(int *)a3 portraitY:(int *)a4;
+ (BOOL)extractAspectRatios:(const char *)a0 prefix:(const char *)a1 landscapeX:(int *)a2 landscapeY:(int *)a3 portraitX:(int *)a4 portraitY:(int *)a5;
+ (BOOL)extractExpectedAspectRatios:(const char *)a0 expectedLandscapeX:(int *)a1 expectedLandscapeY:(int *)a2 expectedPortraitX:(int *)a3 expectedPortraitY:(int *)a4;
+ (BOOL)featureListString:(char *)a0 maxSize:(long long)a1 payload:(int)a2 featureListStrings:(struct __CFDictionary { } *)a3;
+ (BOOL)findFeatureString:(const char *)a0 value:(char *)a1 valueLength:(unsigned long long)a2 withPrefix:(const char *)a3;
+ (void)fixInvalidAspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 landscape:(struct CGSize { double x0; double x1; } *)a1;
+ (id)newEmptyFeatureString;
+ (id)newEmptyFeatureStringWithPayload:(int)a0;
+ (id)newFeatureListStringsDictForGroupID:(unsigned int)a0 isOneToOne:(BOOL)a1;
+ (id)newLocalFeaturesStringWithType:(unsigned char)a0 aspectRatioFLS:(id)a1;
+ (id)newScreenFeatureString;
+ (id)retrieveRawFeaturesStringWithType:(unsigned char)a0;

@end
