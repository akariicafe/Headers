@class NSObject;
@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue;
@property (readonly, nonatomic) BOOL shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (void)printSyncDurationStats;
- (void)printPowerAndWifiStats;
- (void)dumpMOCLoggingMetaData;
- (void)printIfWeAreInTheMiddleOfASync;
- (void)clearSyncStats;
- (BOOL)_checkArgumentValidity:(id)a0 withFileName:(id)a1 withPredicate:(id)a2 withError:(id *)a3;
- (id)_lastHoursToAppend:(int)a0;
- (id)_predicateToAppend:(id)a0;
- (double)_calculateMinutesSyncingWithDurationKey:(id)a0 attemptDateKey:(id)a1;
- (id)_dictionaryForDayKey:(id)a0;
- (void)_noteSyncEndedForDurationKey:(id)a0 dateKey:(id)a1;
- (void)noteAHDASyncEnded;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)_calculateConnectedMinutesForDateKey:(id)a0 durationKey:(id)a1 daysDictionary:(id)a2 totalDurationDictionary:(id)a3 totalDurationKey:(id)a4;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)a0;
- (void)_incrementSyncAttemptsWithKey:(id)a0 syncDateKey:(id)a1;
- (void)_compressAndDeleteFilesAtPath:(id)a0 destinationFilePath:(id)a1 withCompletion:(id /* block */)a2;
- (void)dumpLogsToFolderAtPath:(id)a0 withFileName:(id)a1 lastHours:(int)a2 predicate:(id)a3 includeCKDebug:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)logShowCommandToFilePath:(id)a0 lastHours:(int)a1 predicate:(id)a2;
- (void)_includeCloudKitDebugFilesAtPath:(id)a0;
- (void)incrementCoreDuetSyncAttempts;
- (void)incrementAHDASyncAttempts;
- (void)noteCoreDuetSyncEnded;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isOnPower;
- (BOOL)_isWifiUsable;

@end
