@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (id)deviceProductVersion;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)supportExternalPhraseSpotter;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)supportTTS;
+ (BOOL)VTIsHorseman;
+ (double)systemUpTime;
+ (void)forceReload;
+ (BOOL)isIOS;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)supportPremiumAssets;
+ (id)deviceSoftwareVersion;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (BOOL)isTorpedo;
+ (BOOL)isAlwaysOn;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (id)deviceProductType;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)supportBargeIn;
+ (BOOL)isNonUI;
+ (BOOL)isNano;

@end
