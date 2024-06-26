@class PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate, NSDictionary, PLIOKitOperatorComposition, NSMutableArray, PLEntry, PLSemaphore, NSString, PLNSNotificationOperatorComposition, PLXPCResponderOperatorComposition, PLCFNotificationOperatorComposition, PLMonotonicTimer, NSNumber, PLTimer;

@interface PLBatteryAgent : PLAgent <ACCConnectionInfoDelegateProtocol>

@property (readonly) PLIOKitOperatorComposition *iokitPowerSource;
@property (readonly) PLIOKitOperatorComposition *iokitPPM;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSNumber *deviceIsPluggedIn;
@property double batteryLevelPercent;
@property double rawBatteryVoltageVolt;
@property int presentMaxRa;
@property int lifetimeMaxRa;
@property (retain) NSDictionary *lastITMiscStatus;
@property int previousCurrentAccumulator;
@property int previousCurrentAccumulatorCount;
@property (retain) NSDate *previousCurrentAccumulatorDate;
@property (retain) PLTimer *EABatteryTimer;
@property (retain) PLMonotonicTimer *significantBatteryChangeTimer;
@property (readonly) NSString *entryKeyEABattery;
@property (readonly) NSString *entryKeyEAPencilStats;
@property double EAEnergyDrained;
@property double EABatteryLevel;
@property (retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
@property (retain) NSDate *lastEABatteryConnectedTime;
@property (retain) PLTimer *eaBatteryConnectCountTimer;
@property BOOL isPingPongCharging;
@property BOOL isFirstTimeCheckingPingPong;
@property BOOL lifetimeDataLogged;
@property (retain) PLTimer *periodicAggdTimer;
@property (retain) PLTimer *xFlagsRetryTimer;
@property (retain) PLEntry *lastBatteryConfigEntry;
@property (retain) NSNumber *lastDOD0;
@property struct __IOHIDManager { } *BTMmanager;
@property (retain) PLXPCResponderOperatorComposition *batteryInfoResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryTemperatureResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryDischargeCurrentResponder;
@property (retain) PLIOKitOperatorComposition *chargerIOService;
@property (retain) PLEntry *lastChargerEntry;
@property (retain) PLIOKitOperatorComposition *magsafeIOService;
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) PLTimer *gasGaugeTimer;
@property (retain) NSDate *lastGasGaugeLogTime;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property BOOL allowGasGaugeRead;
@property (readonly) PLIOKitOperatorComposition *ioAccessoryManager;
@property (retain) PLXPCResponderOperatorComposition *batteryShutdownDataResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryUPOStepperResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryConfigResponder;
@property (retain) PLXPCListenerOperatorComposition *UPOStepperListener;
@property (retain) PLXPCListenerOperatorComposition *smartChargingListener;
@property (retain) PLXPCListenerOperatorComposition *mobileChargeModeListener;
@property BOOL shouldLogEABatteryConfig;
@property (retain) NSMutableArray *trackedAccessories;
@property int priIOAccessoryPowerMode;
@property BOOL shouldQueryForAccessory;
@property (retain) NSDate *lastTimeChargingInfoUpdated;
@property int prevConnectedState;
@property int prevChargingState;
@property (retain) PLEntry *entryChargingOld;
@property (retain) NSDate *lastTimePenaltyBoxIntervalUpdated;
@property (retain) NSDate *lastTimeInPenaltyBox;
@property BOOL inPenaltyBox;
@property (retain) NSNumber *prevGGResetCount;
@property int presentChemicalWeightedRa;
@property int presentWeightedRa;
@property int presentBatteryHealthMetric;
@property int presentPeakPerformanceCapacity;
@property int presentOCVCount;
@property int presentOCV;
@property int presentRaUpdateDisqualified;
@property int presentQmaxUpdateDisqualified;
@property int presentTimeSinceLastOCV;
@property (retain) NSNumber *mitigatedUPOCount;
@property BOOL rejudgeBattery;
@property struct ggcontext { } *gasGagueConnection;
@property int lastUILevel;
@property long long ppmEventLoggingCount;
@property (retain) PLTimer *ppmEventThresholdTimer;
@property (retain) PLCFNotificationOperatorComposition *cpmsDebugNotification;
@property long long csmTotalCount;
@property long long csmFailureCount;
@property (retain) NSDate *csmLastFlushMonotonicDate;
@property double csmFlushInterval;
@property (retain) PLCFNotificationOperatorComposition *csmFlushNotification;
@property (retain) PLCFNotificationOperatorComposition *csmOverrideNotification;
@property BOOL csmOverrideValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventNoneDefinitionBatteryConfig;
+ (id)entryEventNoneDefinitionUserType;
+ (id)entryEventPointDefinitionBatteryShutdown;
+ (id)entryEventPointDefinitionChargingInfo;
+ (id)entryEventPointDefinitionEABatteryConfig;
+ (id)entryEventPointDefinitionEAPencil;
+ (id)entryEventPointDefinitionBatteryUILogging;
+ (id)entryEventPointDefinitionPPMDebug;
+ (id)entryEventPointDefinitionPPMClientMetrics;
+ (id)entryEventPointDefinitionUPOStepper;
+ (id)entryEventPointDefinitionBatterySample;
+ (id)entryEventPointDefinitionCPMSControlState;
+ (id)entryEventPointDefinitionCPMSClientState;
+ (id)entryEventPointDefinitionGasGaugeReconnect;
+ (BOOL)shouldLogCPMS;
+ (BOOL)hasChargingInfoLogging;
+ (id)entryEventForwardDefinitionExternalCharger;
+ (id)entryEventForwardDefinitionEAPencil;
+ (id)entryEventForwardDefinitionLightningConnectorStatus;
+ (id)entryEventForwardDefinitionUPOStepper;
+ (id)entryEventForwardDefinitionMitigationState;
+ (id)entryEventForwardDefinitionIOPMUBootLPMLog;
+ (id)entryEventForwardDefinitionSmartCharging;
+ (id)entryEventForwardDefinitionEAPencilCharging;
+ (id)entryEventForwardDefinitionCalibration0;
+ (id)entryEventForwardDefinitionMobileChargeMode;
+ (BOOL)hasLightning;
+ (BOOL)hasWirelessCharger;
+ (BOOL)supportsSmartCharging;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionEABattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitionCurrentAccumulator;
+ (id)entryEventBackwardDefinitionChargingHeatMapA;
+ (id)entryEventBackwardDefinitionChargingHeatMapB;
+ (id)entryEventBackwardDefinitionDischargingHeatMap;
+ (id)entryEventBackwardDefinitionKioskMode;
+ (id)entryEventBackwardDefinitionBTM;
+ (BOOL)hasExternalAccessory;
+ (BOOL)supportsAccConnectionLogging;
+ (BOOL)shouldLogBTM;
+ (id)entryAggregateDefinitionUILevel;
+ (id)connectStateStringToEnum:(id)a0;
+ (BOOL)shouldLogPPMDebugDetail;
+ (BOOL)supportsxFlags;

- (int)deviceType;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)accessoryDisconnected:(id)a0;
- (void)logBTM;
- (long long)xFlags;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void)logEventForwardLPEM;
- (id)dataFromHexString:(id)a0;
- (id)getMitigatedUPOCountDefault;
- (void)setupCSMLogging;
- (id)logEventBackwardBatteryWithRawData:(id)a0;
- (BOOL)hasAppleSmartBattery;
- (void)sampleBatteryEntryWithRawData:(id)a0 andProperties:(id)a1;
- (BOOL)shouldWaitForLifetimeDataWithRawData:(id)a0;
- (id)overrideBatteryData:(id)a0 withPath:(id)a1;
- (void)logEventNoneBatteryConfigWithRawData:(id)a0;
- (void)aggdTimerFired;
- (id)parseBatterySerialNumber:(id)a0;
- (BOOL)modifiedExternalChargerEntry:(id)a0;
- (void)updateLastChargeLevel:(int)a0 withTimestamp:(double)a1;
- (void)logCurrentAccumulatorWithRawData:(id)a0;
- (void)checkChargingInfoChange:(id)a0;
- (void)logEventPointChargingInfoWithChargingData:(id)a0;
- (void)refreshEABatteryStatusTriggeredByConnectionEvent:(BOOL)a0;
- (void)logEventIntervalGasGauge;
- (BOOL)gasGaugeOpenAndStartLogging;
- (void)fakeLogEntry:(id)a0;
- (void)accessoryConnectionEventNotification:(id)a0;
- (void)accessoryDisconnectEventNotification:(id)a0;
- (void)accessoryConnected:(id)a0;
- (BOOL)gasGaugeStopLoggingAndClose;
- (BOOL)isEABatteryConnectedNow;
- (BOOL)isEAPencilConnectedNow;
- (void)setupEALoggingTriggeredByConnectionEvent:(BOOL)a0;
- (void)cancelEALogging;
- (void)logEABatteryConnectedEventToAnalyticsIgnoreLastLogTimestamp:(BOOL)a0;
- (void)logEABatteryStatistics;
- (void)logEABatteryConnectedTimeToAnalyticsWithEAConnectionState:(BOOL)a0;
- (void)detectEAPencilConnectionWithNotification:(id)a0;
- (id)getIOPSDevices;
- (id)getBaseIdentifierFromDevice:(id)a0;
- (void)logEABatteryConfig:(id)a0;
- (void)setAggdIntegerValueFromEntry:(id)a0 forKey:(id)a1 withPrefix:(id)a2;
- (void)logEABatteryConfigToAggd:(id)a0;
- (id)createTimerForEABatteryCountLogging;
- (void)logEventPointBatteryShutdown;
- (void)logEventPointUPOStepper;
- (void)logEventBackwardHeatMap;
- (void)logEventBackwardKioskMode;
- (void)logEventNoneBatteryConfigCycleCountData;
- (void)handleSBC;
- (void)logEventForwardUPOStepperWithPayload:(id)a0;
- (void)handleMitigationStateCallback:(int)a0;
- (void)logEventForwardMitigationStateWithState:(unsigned long long)a0 userDisabled:(BOOL)a1;
- (void)handlePPMCallback;
- (void)initSmartChargingLogging;
- (void)logEventForwardMobileChargeMode:(id)a0;
- (void)logCPMSSnapshotWithTrigger:(long long)a0;
- (void)logPPMDebug;
- (void)logEventBackwardBattery;
- (void)logEventNoneUserType;
- (id)getUPOStepperData;
- (id)getPPMDebugData;
- (void)gasGaugeRead;
- (BOOL)driverActive:(id)a0;
- (void)logChargingParametersToAggd:(id)a0;
- (int)calculateConnectedState:(id)a0;
- (int)calculateChargingState:(id)a0;
- (BOOL)checkForPenaltyBox:(id)a0;
- (void)logPenaltyBoxDurationToAggd:(double)a0;
- (void)logChargingTimeToAggd:(double)a0;
- (void)logBaselineToAggD:(id)a0;
- (void)setMitigationStateDefault:(unsigned long long)a0;
- (void)logEventBackwardHeatMapCallback:(id)a0 andHeatMapType:(long long)a1;
- (void)logEventBackwardKioskModeCallback:(id)a0;
- (void)logKioskModeEntryToAggd:(id)a0;
- (id)presentMaxRaFromRawData:(id)a0;
- (id)parseITMiscStatusCounters:(id)a0;
- (void)updateCurrentSenseMonitorStatusWithEntry:(id)a0;
- (id)lowBatteryLogPath;
- (id)parseRawRaTableData:(id)a0;
- (id)parseTimeAtHighSoc:(id)a0;
- (void)setMitigatedUPOCountDefault:(id)a0;
- (void)logBatteryConfigToAggd:(id)a0;
- (void)logBatteryConfigToCA:(id)a0;
- (id)parseTimeAtHighSocHex:(id)a0;
- (id)getBatteryShutdownData;
- (id)lowBatteryLogString;
- (void)logBatteryShutdownToAggd:(id)a0;
- (BOOL)isUPOEntry:(id)a0;
- (void)pushTimeAtHighSocToAggD:(id)a0;
- (void)pushTimeAtHighSocToCA:(id)a0;
- (int)getBatteryMaximumCapacityPercent;
- (id)getBatteryCalibration0Data;
- (void)logEventForwardCalibration0withData:(id)a0;
- (id)parseRawSafetyFaultCounter:(id)a0;
- (int)batteryLifetimeUPOCount;
- (id)weekOfManufacture:(id)a0;
- (id)batteryEEEECode:(id)a0;
- (id)isOriginalBattery;
- (BOOL)batterySerialChanged:(id)a0;
- (int)getBatteryHealthServiceState;
- (int)getBatteryHealthServiceFlags;
- (void)logWatchdogDebugDumpToCA:(id)a0;
- (BOOL)givePluggedInFreePass;
- (void)addPowerMeasurementToAccounting:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)accountGaugePowerFromCurrentAccumulatorEntry:(id)a0;
- (void)flushCSMToAggdAtDate:(id)a0;
- (void)logEventForwardSmartChargingWithPayload:(id)a0;
- (BOOL)shouldLogCPMSSnapshotWithReason:(unsigned char)a0 withTrigger:(long long)a1;
- (void)populateClientEntry:(id)a0 withBudget:(id)a1 withTemplate:(id)a2;
- (void)setupBatterySubsampling;
- (void)pushFCCDataToCoreAnalytics;
- (int)getMitigationDefaults;

@end
