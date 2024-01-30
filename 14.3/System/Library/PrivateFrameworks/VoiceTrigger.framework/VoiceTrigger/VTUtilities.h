@interface VTUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)supportExternalPhraseSpotter;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (double)systemUpTime;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (id)deviceSoftwareVersion;
+ (id)deviceProductType;
+ (void)forceReload;
+ (BOOL)isIOS;
+ (BOOL)isTorpedo;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)deviceProductVersion;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)supportPremiumAssets;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportBargeIn;
+ (BOOL)isNano;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)supportTTS;
+ (BOOL)VTIsHorseman;

@end
