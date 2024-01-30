@interface VTUtilities : NSObject

+ (BOOL)isAlwaysOn;
+ (BOOL)supportExternalPhraseSpotter;
+ (void)forceReload;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (unsigned long long)horsemanDeviceType;
+ (BOOL)isNano;
+ (BOOL)isInternalInstall;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isNonUI;
+ (BOOL)isIOS;
+ (id)deviceSoftwareVersion;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (BOOL)supportBargeIn;
+ (BOOL)supportRemoteDarwinVoiceTrigger;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)supportTTS;
+ (BOOL)VTIsHorseman;
+ (BOOL)supportPremiumAssets;
+ (double)systemUpTime;
+ (BOOL)isTorpedo;

@end
