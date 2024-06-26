@interface SUUtility : NSObject

+ (id)serialNumber;
+ (void)setIsDaemon:(BOOL)a0;
+ (BOOL)isDaemon;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)a0 growth:(unsigned long long)a1;
+ (id)addToDate:(id)a0 numberOfDays:(long long)a1;
+ (void)assignError:(id *)a0 withCode:(long long)a1;
+ (void)enableAppDemotion:(BOOL)a0;
+ (id)currentDeviceName;
+ (id)prettyPrintDate:(id)a0;
+ (long long)demoteApps:(unsigned long long)a0 withError:(id *)a1;
+ (BOOL)freeCachedSpaceSynchronous:(unsigned long long)a0 timeout:(double)a1;
+ (BOOL)isCellularDataCapable;
+ (long long)translateErrorCodeFromError:(id)a0;
+ (BOOL)freeCachedSpaceSynchronous:(unsigned long long)a0 timeout:(double)a1 isAutoDownload:(BOOL)a2 disableCDLevelFour:(BOOL)a3 disableSiriDeletion:(BOOL)a4 disableAppDemotion:(BOOL)a5;
+ (int)randomIntWithMinVal:(unsigned int)a0 maxVal:(unsigned int)a1;
+ (BOOL)cellularDataIsEnabled;
+ (unsigned long long)systemPartitionGrowth:(id)a0;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)a0 growth:(unsigned long long)a1 deltaSpaceNeeded:(unsigned long long *)a2;
+ (id)currentProductCategory;
+ (id)gregorianCalendar;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)a0 growth:(unsigned long long)a1 deltaSpaceNeeded:(unsigned long long *)a2 isAutoDownload:(BOOL)a3 disableCDLevelFour:(BOOL)a4 disableCDLevelThree:(BOOL)a5 disableSiriDeletion:(BOOL)a6 disableAppDemotion:(BOOL)a7;
+ (id)fastWorkQueue;
+ (id)currentReleaseType;
+ (BOOL)writeKeepAliveFile;
+ (BOOL)hasCellularRadio;
+ (id)bootTime;
+ (id)translateError:(id)a0;
+ (BOOL)deleteKeepAliveFile;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)a0 growth:(unsigned long long)a1 deltaSpaceNeeded:(unsigned long long *)a2 isAutoDownload:(BOOL)a3;
+ (id)errorWithCode:(long long)a0;
+ (id)currentProductBuild;
+ (BOOL)hasEnoughDiskSpace:(unsigned long long)a0 growth:(unsigned long long)a1 deltaSpaceNeeded:(unsigned long long *)a2 isAutoDownload:(BOOL)a3 includePurging:(BOOL)a4;
+ (id)autoDownloadExpiredError:(BOOL)a0;
+ (id)currentProductType;
+ (id)taskQueue;
+ (id)errorRemovingUserInfoKey:(id)a0 originalError:(id)a1;
+ (long long)cacheDelete:(id)a0;
+ (id)currentProductVersion;
+ (void)postFailureNotification:(id)a0 body:(id)a1 buttonText:(id)a2 altButtonText:(id)a3;
+ (id)appDemotionSettingQueue;
+ (BOOL)currentReleaseTypeIsInternal;
+ (id)errorWithCode:(long long)a0 originalError:(id)a1;
+ (unsigned long long)devicePadding:(id)a0;
+ (unsigned long long)totalPurgeableSpace:(id)a0;
+ (BOOL)freeCachedSpaceSynchronous:(unsigned long long)a0 timeout:(double)a1 isAutoDownload:(BOOL)a2;
+ (void)setCacheable:(BOOL)a0;
+ (id)URLIfFileExists:(id)a0;
+ (void)purgeV1SUAssets;
+ (id)mainWorkQueue;
+ (id)internalRecoveryStringForErrorCode:(long long)a0;
+ (id)translateError:(id)a0 withAddedUserInfo:(id)a1;
+ (BOOL)isWiFiCapable;
+ (BOOL)isProductionFused;
+ (long long)MADownloadErrorCodeToSUDownloadErrorCode:(long long)a0;
+ (id)systemContainerURL;
+ (BOOL)alarmSetBeforeDate:(id)a0;
+ (void)postAutoUpdateInformationalNotification:(id)a0 body:(id)a1 buttonText:(id)a2 altButtonText:(id)a3 withCompletion:(id /* block */)a4;
+ (void)assignError:(id *)a0 withError:(id)a1 translate:(BOOL)a2;
+ (long long)appDemoteableSpace;
+ (BOOL)appDemotionIsEnabled;

@end
