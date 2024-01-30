@class PLTimer, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSDate;

@interface PLProximityAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *radioStateListener;
@property (retain) PLXPCListenerOperatorComposition *clientStateListener;
@property (retain) PLXPCListenerOperatorComposition *radioPowerListener;
@property (retain) PLXPCListenerOperatorComposition *timerStateListener;
@property (retain) PLXPCListenerOperatorComposition *maintenanceListener;
@property (retain) PLXPCListenerOperatorComposition *deviceConnectionListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numBTLines;
@property unsigned long long numConnects;
@property unsigned long long numDisconnects;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDate *lastSBCTimestamp;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitionMaintainedDevices;
+ (BOOL)isProximitySupported;
+ (id)entryEventPointDefinitionDeviceConnection;
+ (id)entryEventBackwardDefinitionRadioPower;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionRadioState;
+ (id)entryEventForwardDefinitionClientState;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)isProximityLiteSupported;
+ (id)entryEventPointDefinitionTimerState;
+ (id)entryEventIntervalDefinitionBinnedDeviceConnection;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void)logEventPointMaintenance:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardRadioState:(id)a0;
- (void)log;
- (void)logEventForwardClientState:(id)a0;
- (void)logEventIntervalBinnedDeviceConnection;
- (void)logEventPointTimerState:(id)a0;
- (void)logEventPointDeviceConnection:(id)a0;
- (void)logEventBackwardPowerStats:(id)a0;
- (void)initOperatorDependancies;

@end
