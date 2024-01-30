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

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)isProximityLiteSupported;
+ (id)entryEventIntervalDefinitionBinnedDeviceConnection;
+ (id)entryEventForwardDefinitionRadioState;
+ (BOOL)isProximitySupported;
+ (id)entryEventPointDefinitionMaintainedDevices;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionClientState;
+ (void)load;
+ (id)entryEventBackwardDefinitionRadioPower;
+ (id)entryEventPointDefinitionDeviceConnection;
+ (id)entryEventPointDefinitionTimerState;

- (void)logEventForwardClientState:(id)a0;
- (void)logEventPointMaintenance:(id)a0;
- (void)logEventBackwardPowerStats:(id)a0;
- (void)logEventPointDeviceConnection:(id)a0;
- (void)log;
- (void)logEventIntervalBinnedDeviceConnection;
- (void).cxx_destruct;
- (id)init;
- (void)logEventForwardRadioState:(id)a0;
- (void)logEventPointTimerState:(id)a0;
- (void)initOperatorDependancies;

@end
