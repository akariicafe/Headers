@class PLXPCListenerOperatorComposition, PLTimer;

@interface PLSecureServiceAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *daemonLaunchListener;
@property (retain) PLXPCListenerOperatorComposition *connectionListener;
@property (retain) PLXPCListenerOperatorComposition *disconnectionListener;
@property (retain) PLXPCListenerOperatorComposition *deviceIntentListener;
@property (retain) PLXPCListenerOperatorComposition *periodicReportListener;
@property (retain) PLTimer *entriesPerHourTimer;
@property long long numBTConn;
@property long long periodicReportCount;
@property long long prevActiveKeys;
@property long long numEntries;

+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionConnectionState;
+ (id)entryEventPointDefinitionSummary;
+ (BOOL)isSecureServiceSupported;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointConnectionState:(id)a0 withEvent:(long long)a1;
- (void)logEventPointPeriodicReport:(id)a0;

@end
