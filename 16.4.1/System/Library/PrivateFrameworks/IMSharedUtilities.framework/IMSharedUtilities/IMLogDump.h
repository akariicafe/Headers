@class NSObject;
@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue;
@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (id)_predicateToAppend:(id)a0;
- (BOOL)_isWifiUsable;
- (BOOL)_checkArgumentValidity:(id)a0 withFileName:(id)a1 withPredicate:(id)a2 withError:(id *)a3;
- (void)noteCoreDuetSyncEnded;
- (void)noteAHDASyncEnded;
- (void)printSyncDurationStats;
- (id)logShowCommandToFilePath:(id)a0 lastHours:(int)a1 predicate:(id)a2;
- (void)dumpMOCLoggingMetaData;
- (void)incrementAHDASyncAttempts;
- (void)printPowerAndWifiStats;
- (id)_dictionaryForDayKey:(id)a0;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)_noteSyncEndedForDurationKey:(id)a0 dateKey:(id)a1;
- (void)_calculateConnectedMinutesForDateKey:(id)a0 durationKey:(id)a1 daysDictionary:(id)a2 totalDurationDictionary:(id)a3 totalDurationKey:(id)a4;
- (void)_includeCloudKitDebugFilesAtPath:(id)a0;
- (id)_lastHoursToAppend:(int)a0;
- (BOOL)_isOnPower;
- (id)init;
- (void)printIfWeAreInTheMiddleOfASync;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)a0;
- (void)dumpLogsToFolderAtPath:(id)a0 withFileName:(id)a1 lastHours:(int)a2 predicate:(id)a3 includeCKDebug:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)clearSyncStats;
- (void)incrementCoreDuetSyncAttempts;
- (void)_compressAndDeleteFilesAtPath:(id)a0 destinationFilePath:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_incrementSyncAttemptsWithKey:(id)a0 syncDateKey:(id)a1;
- (double)_calculateMinutesSyncingWithDurationKey:(id)a0 attemptDateKey:(id)a1;

@end
