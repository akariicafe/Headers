@class PLTelephonyConnection, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSMutableArray, NSDate;

@interface PLBBPowerToolService : PLService

@property unsigned char exclusionMask;
@property (retain) PLEntryNotificationOperatorComposition *audioEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *hotspotEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property (retain) PLEntryNotificationOperatorComposition *msgLiteCallback;
@property (retain) PLEntryNotificationOperatorComposition *wcdmaRRCCallback;
@property (retain) PLEntryNotificationOperatorComposition *lteRRCCallback;
@property (retain) PLEntryNotificationOperatorComposition *telActivityCallback;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) NSMutableArray *startExclusionPeriods;
@property (retain) NSMutableArray *endExclusionPeriods;
@property double elapsedDenumerator;
@property double totalNormalARMUtility;
@property double armUtilityThresholdVal;
@property double magicDeltaThresholdVal;
@property double oosDurationVal;
@property double rrcDisconnectedVal;
@property (retain) NSDate *startSamplingDate;
@property (weak) PLTelephonyConnection *connection;
@property double gArmUtil;
@property int gPerepherialMax;
@property (retain) NSDate *notToRemoveDate;
@property BOOL sendAWD;
@property BOOL doesCurrPackageHasProblem;
@property BOOL doesPrevPackageHasProblem;
@property BOOL isUIAlertEnabled;

+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryCauseDefinition;
+ (id)entryCauseHelperDefinition;
+ (id)entryArmUtil;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)handleDisplayCallback:(id)a0;
- (void)handleAudioCallback:(id)a0;
- (void)handleMavBBHwOtherCallback:(id)a0;
- (void)resetAllCounters:(id)a0;
- (void)handleHotspotCallback:(id)a0;
- (void)msgLiteCallback:(id)a0;
- (void)wcdmaRRCCallback:(id)a0;
- (void)lteRRCCallback:(id)a0;
- (void)telActivityCallback:(id)a0;
- (void)submitAWD;
- (void)setupInitExclusions;
- (void)writeToHelperTable:(id)a0 WithValue:(double)a1 withDate:(id)a2;
- (void)handleExclusionWithState:(BOOL)a0 withExclusion:(unsigned char)a1;
- (BOOL)isPackageValidWithEntry:(id)a0;
- (void)collectExtraDataForPackage:(id)a0;
- (BOOL)doesCurrPeriodHaveProblem:(id)a0;
- (void)handleProblemWithEntry:(id)a0;
- (id)findCauseWithEntry:(id)a0;
- (void)resetStructuresWithSnapshot:(struct CauseSnapshot { long long x0; double x1; long long x2; } *)a0 withDuration:(struct CauseDurations { int x0; double x1; double x2; double x3; double x4; } *)a1;
- (void)analazeIntervalWithSnapshot:(struct CauseSnapshot { long long x0; double x1; long long x2; } *)a0 withDuration:(struct CauseDurations { int x0; double x1; double x2; double x3; double x4; } *)a1 withInterval:(double)a2 withEntry:(id)a3;
- (id)analazeCauseResultsReturnCause:(struct CauseDurations { int x0; double x1; double x2; double x3; double x4; } *)a0;
- (double)calculateMaxPerepherialPercentageWithEntry:(id)a0;
- (BOOL)isPackageTimeValidWithEntry:(id)a0;
- (BOOL)containsExclusionsAfterCleanupWithDate:(id)a0;
- (double)percentageHistogramFromArray:(id)a0;

@end
