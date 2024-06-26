@class PLXPCResponderOperatorComposition, PLAccountingDebugService, NSDictionary, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSMutableArray, PLSemaphore;

@interface PLDebugService : PLService

@property (retain) PLXPCListenerOperatorComposition *xpcListenerPLLog;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLLog;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLAPITest;
@property (retain) PLXPCListenerOperatorComposition *aggregateTestListener;
@property (retain) PLXPCResponderOperatorComposition *aggregateTestResponder;
@property (retain) PLXPCListenerOperatorComposition *schemaTestListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionNewListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionUpdateListener;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) PLEntryNotificationOperatorComposition *sleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLAccountingDebugService *accDS;
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListener;
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponder;
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListenerNonWhitelisted;
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponderNonWhitelisted;
@property (retain) PLXPCListenerOperatorComposition *clientFrameworkTestListenerBatch;
@property (retain) PLXPCResponderOperatorComposition *clientFrameworkTestResponderBatch;
@property (retain) NSDictionary *clientFrameworkTestData;
@property (retain) NSMutableArray *clientFrameworkTestDataBatch;

+ (void)load;
+ (id)entryEventNoneDefinitionFastInsertTest;
+ (id)railDefinitions;
+ (id)entryEventNoneDefinitionArrayTest;
+ (id)entryEventPointDefinitionTest;
+ (id)entryEventNoneDefinitionSleepNotificationTest;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionAggregateTest;
+ (id)entryAggregateDefinitionAggregateTestSmall;
+ (id)entryAggregateDefinitionAggregateTestVerySmall;
+ (id)entryAggregateDefinitionAggregateTestSplitAndBucket;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionPLAPITest;

- (id)testPLAPICore_UpdateEntry:(id)a0;
- (id)testPLAPIAccounting_CreateDistributionEventPoint:(id)a0;
- (id)testPLAPIAccounting_CreateDistributionEventForwardRem:(id)a0;
- (void)testFastInserts;
- (id)testPLAPICore_DeleteAllEntriesForKeyWF:(id)a0;
- (id)testPLAPICore_DeleteAllEntriesForKey:(id)a0;
- (void)testEntryLogRequestedForEntryKey:(id)a0;
- (void)stressActivityScheduler;
- (void)stressMonotonicTimer3;
- (id)init;
- (BOOL)rawRead:(id)a0;
- (id)testPLAPICore_DeleteEntryForKey:(id)a0;
- (void)stressAggregateSmall;
- (void)testCompression;
- (void)testEntryWake;
- (void)stressTimer;
- (void).cxx_destruct;
- (id)testPLAPICore_EntriesForKeyWithProperties:(id)a0;
- (id)testPLAPIAccounting_CreatePowerEventInterval:(id)a0;
- (void)stressAggregateVerySmall;
- (id)testPLAPICore_LastEntryForKeyWSEK:(id)a0;
- (id)testPLAPICore_EntriesForKeyBeforeTICWF:(id)a0;
- (id)testPLAPICore_DeleteAllEntriesForKeyBTWF:(id)a0;
- (void)stressCache;
- (id)testPLAPIAccounting_CreatePowerEventBackward:(id)a0;
- (id)testPLAPIAccounting_CreateQualificationEventPoint:(id)a0;
- (id)testPLAPIAccounting_CreateQualificationEventInterval:(id)a0;
- (id)test_LogErr:(id)a0 str:(id)a1;
- (void)printNullTestResultsForEntry:(id)a0 withDescription:(id)a1;
- (id)testPLAPIAccounting_CreateQualificationEventForwardRem:(id)a0;
- (void)testArray;
- (id)testPLAPICore_WriteEntries:(id)a0;
- (id)testPLAPIAccounting_ExistingTest:(id)a0;
- (void)testBlockingFlushCaches;
- (void)testEntrySleep;
- (void)testGenerateOTASubmission;
- (id)testPLAPICore_WriteEntry:(id)a0;
- (void)stressPLEntry;
- (id)testPLAPICore_EntriesForKeyInTimeRange:(id)a0;
- (void)testMonotonicAggregateEntries;
- (void)testMonotonicTimerThroughSleep;
- (void)stressSetObjectForKey;
- (void)testAllEntryKeyRequests;
- (id)testPLAPIAccounting_CreateDistributionEventInterval:(id)a0;
- (void)stressMidnightCalculation;
- (void)testEntryApplicationAgent;
- (void)testArchive;
- (void)fireSignificantBatteryChangeNotification;
- (id)testPLAPIAccounting_CreateQualificationEventBackward:(id)a0;
- (void)stressMonotonicTimer;
- (void)stressMonotonicTimer2;
- (id)testPLAPICore_DeleteEntry:(id)a0;
- (id)testPLAPIAccounting_AddPowerMeasurementEventInterval:(id)a0;
- (id)testPLAPIAccounting_CreateDistributionEventBackward:(id)a0;
- (void)testABM;
- (void)testDailyTasks;
- (id)test_LogPass:(id)a0 str:(id)a1;
- (void)testExit;
- (id)testPLAPIAccounting_CreateQualificationEventForwardChild:(id)a0;
- (void)testMonotonicAggregateEntriesExtendedTime;
- (void)stressCacheSmall;
- (void)testEntryQueries;
- (void)stressObjectForKey;
- (id)testPLAPIAccounting_CreatePowerEventForward:(id)a0;
- (id)testPLAPIAccounting_CreateQualificationEventForwardAdd:(id)a0;
- (void)aggregateDataFromSignpost;
- (id)testPLAPICore_LastEntryForKeyWC:(id)a0;
- (void)stressTaskingSubmission;
- (void)currentBasebandTime;
- (id)filledTestArrayEntry;
- (void)initOperatorDependancies;
- (id)testPLAPIAccounting_CreateDistributionEventForwardChild:(id)a0;
- (void)testEntryDelete;
- (void)testUTF8;
- (void)testProportionateAggregateEntries;
- (id)testPLAPIAccounting_CreateDistributionEventForwardAdd:(id)a0;
- (BOOL)rawWrite:(id)a0;

@end
