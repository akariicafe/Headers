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

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)isProximityLiteSupported;
+ (id)entryEventIntervalDefinitionBinnedDeviceConnection;
+ (id)entryEventForwardDefinitionRadioState;
+ (id)entryEventBackwardDefinitionRadioPower;
+ (BOOL)isProximitySupported;
+ (id)entryEventForwardDefinitionClientState;
+ (id)entryEventPointDefinitionMaintainedDevices;
+ (id)entryEventPointDefinitionDeviceConnection;
+ (id)entryEventPointDefinitionTimerState;

- (void)initOperatorDependancies;
- (void)logEventPointMaintenance:(id)a0;
- (void)logEventBackwardPowerStats:(id)a0;
- (void)logEventForwardRadioState:(id)a0;
- (void)log;
- (void)logEventPointTimerState:(id)a0;
- (void)logEventIntervalBinnedDeviceConnection;
- (void)logEventForwardClientState:(id)a0;
- (void)logEventPointDeviceConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
