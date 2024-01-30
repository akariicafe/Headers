@class PLDiscretionaryEnergyMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface PLDiscretionaryIntervalManager : NSObject

@property (retain) NSMutableDictionary *identifierToDiscretionaryIntervals;
@property (retain) NSMutableDictionary *activityNameToInvolvedIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *openIntervalTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogReportTimer;
@property (weak, nonatomic) PLDiscretionaryEnergyMonitor *discretionaryEnergyMonitor;
@property (nonatomic) BOOL quickEnergyEnabled;
@property (retain) NSMutableDictionary *mockData;

- (id)createPowerlogReportTimer;
- (void)handlePowerlogReportTimer;
- (void)logDiscretionaryIntervals;
- (void)enableQuickEnergy;
- (void)handleOpenIntervalTimer;
- (id)coalesceIntervals:(id)a0;
- (void)disableQuickEnergy;
- (void)handleStartEvent:(id)a0 withInfo:(id)a1;
- (void).cxx_destruct;
- (void)reportIntervalsToPowerlog;
- (void)logActivityNameToInvolvedIdentifiers;
- (void)reportQuickEnergyForInterval:(id)a0 withIdentifier:(id)a1 andAdjustSnapshotToNow:(BOOL)a2;
- (id)initWithEnergyMonitor:(id)a0 andMockData:(id)a1;
- (id)createOpenIntervalTimer;
- (void)handleStopEvent:(id)a0 withInfo:(id)a1;

@end
