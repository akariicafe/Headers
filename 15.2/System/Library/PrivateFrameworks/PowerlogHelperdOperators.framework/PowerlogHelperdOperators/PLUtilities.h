@interface PLUtilities : NSObject

+ (id)automatedDeviceGroup;
+ (id)hardwareModel;
+ (BOOL)hasBattery;
+ (id)workQueue;
+ (BOOL)hasGasGauge;
+ (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
+ (BOOL)isHealthDataSubmissionAllowed;
+ (id)containerPath;
+ (BOOL)isAppAnalyticsEnabled;
+ (BOOL)isSiriEnabled;
+ (BOOL)isHeySiriEnabled;
+ (unsigned long long)directorySize:(id)a0;
+ (double)defaultBatteryEnergyCapacity;
+ (BOOL)createAndChownDirectoryIfDirectoryDoesNotExist:(id)a0;
+ (BOOL)compressWithSource:(id)a0 withDestination:(id)a1 withLevel:(int)a2;
+ (id)workQueueForClass:(Class)a0;
+ (id)processNameForPid:(int)a0;
+ (void)exitWithReason:(short)a0;
+ (BOOL)isFullModeDaemon;
+ (BOOL)isLiteModeDaemon;
+ (BOOL)isPowerlogHelperd;
+ (id)allSubClassesForClass:(Class)a0;
+ (id)workQueueForKey:(id)a0;
+ (void)dispatchSyncWithoutDeadlockOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)a0;
+ (BOOL)deviceRebooted;
+ (long long)compareFilesByKey:(id)a0 file1:(id)a1 file2:(id)a2 sortAscending:(BOOL)a3;
+ (BOOL)createAndChownDirectory:(id)a0;
+ (id)shortUUIDString;
+ (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 withName:(id)a2 error:(id *)a3;
+ (void)exitWithReason:(short)a0 connection:(id)a1;
+ (id)transactionWorkQueue;
+ (id)deviceBootTime;
+ (void)exitSafe:(int)a0;
+ (void)setMobileOwnerForFile:(id)a0;
+ (int)compressWithSourceStream:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 withDestination:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 withLevel:(int)a2;
+ (double)getMachbaseTimeRatio;
+ (id)deviceBootUUID;
+ (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getMachTimebase;
+ (id)dateFromTimeval:(struct timeval { long long x0; int x1; })a0;
+ (void)exitWithReason:(short)a0 action:(short)a1;
+ (short)connectionToQuarantine:(id)a0;
+ (void)quarantineToPath:(id)a0 action:(short)a1;
+ (id)bundleIDFromPid:(int)a0;
+ (id)launchdNameToProcessName:(id)a0;
+ (id)binaryPathForPid:(int)a0;
+ (id)bundleIDFromURL:(id)a0;
+ (id)liteModeDaemonName;
+ (id)fullModeDaemonName;
+ (id)runningAsUser;
+ (id)generateAndUpdateSaltValue:(id)a0;
+ (id)generateHashValue:(id)a0 withSalt:(id)a1;
+ (id)getAllowblocklist;
+ (short)logModeForEntryKey:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (id)modeForEntryKey:(id)a0 withKeyName:(id)a1;
+ (short)canLogMode:(id)a0 fullMode:(BOOL)a1;
+ (id)getDeviceNameIOSWatchOS;
+ (BOOL)PLCopyItemsFromPath:(id)a0 toPath:(id)a1;
+ (int)remove:(int)a0 oldestFilesFromDirectory:(id)a1 containingFileNameSubstring:(id)a2;
+ (unsigned long long)dispatchTimeInSeconds:(double)a0;
+ (double)secondsFromMachTime:(unsigned long long)a0;
+ (id)dateFromTimevalSystemTime:(struct timeval { long long x0; int x1; })a0;
+ (void)getCurrentMonotonicAndMachAbsTime:(id *)a0 machAbsTime:(unsigned long long *)a1 machContTime:(unsigned long long *)a2;
+ (unsigned long long)getCurrMachAbsTimeInSecs;
+ (void)exitWithReasonSync:(short)a0;
+ (BOOL)allowQueryFromPeer:(id)a0;
+ (id)getIdentifierFromEntry:(id)a0;
+ (id)bundleVersionFromURL:(id)a0;
+ (id)fullProcessNameForPid:(int)a0;
+ (unsigned long long)maxProcessCount;
+ (BOOL)isDaemonOrAppleXPCService:(int)a0;
+ (BOOL)isUserProcess;
+ (BOOL)runningAsMobileUser;
+ (BOOL)AppDeletionEnabled;
+ (BOOL)SwitchToIncrementalVacuumEnabled;
+ (BOOL)WakeAttributionEnabled;
+ (BOOL)gasGaugeEnabled;
+ (BOOL)isEduMode;
+ (BOOL)isALSCurveHigherThanDefault;
+ (id)hashString:(id)a0;
+ (id)hashBundleID:(id)a0;
+ (id)getSessionsAllowlist;
+ (BOOL)shouldLogForEntryKey:(id)a0;
+ (BOOL)shouldLogForEntryKey:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (BOOL)isPingPongChargingWith:(BOOL)a0 andBatteryLevelPercent:(double)a1;
+ (long long)roundToSigFig:(int)a0 withSigFig:(int)a1;
+ (id)JSONSanitizeDictionary:(id)a0;
+ (BOOL)isValidString:(id)a0;
+ (id)getKVPairsForCASubmissionFromEntry:(id)a0;
+ (struct jetsam_priority_info { int x0; BOOL x1; })getJetamPriority:(int)a0;
+ (void)refreshBUI;
+ (double)scaledPowerBasedOnPoint:(double)a0 withPowerModel:(id)a1;
+ (id)powerModelForOperatorName:(id)a0;
+ (id)torchTypeString;
+ (id)MavRevStringQuery;

@end
