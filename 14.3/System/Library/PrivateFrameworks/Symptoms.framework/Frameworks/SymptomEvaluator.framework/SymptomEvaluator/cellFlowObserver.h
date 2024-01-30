@class NSString, NSMutableDictionary, NSMutableSet, NSDate;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {
    int _classCounter[32];
    int _classFlags;
    int _intialClassFlags;
    int _everSetClassFlags;
    int _everReportedClassFlags;
    int _lastReportedClassFlags;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    BOOL _dampening;
    unsigned int _seqno;
    NSMutableDictionary *_foregroundAppObservelist;
    NSMutableDictionary *_perAppMaxRRCTimeSecs;
    BOOL _flowSnapshotActive;
    NSMutableSet *_flowSnapshotApps;
    unsigned int _flowSnapshotFlags;
    double _flowSnapshotAccumulatedTCEnabledTime;
    NSDate *_flowSnapshotTCEnabledStartTime;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetTrafficClassFlowSnapshot:(BOOL)a0;
- (void)noteForegroundState:(BOOL)a0 forApp:(id)a1 hasForegroundApps:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)noteFlow:(id)a0 snapshot:(id)a1 present:(BOOL)a2 trackedBy:(id)a3;
- (void)configurePolicies:(id)a0;
- (void)endTrafficClassFlowSnapshot:(id)a0 periodUsecs:(unsigned long long)a1 reply:(id /* block */)a2;
- (BOOL)performDisposition:(unsigned int)a0 present:(BOOL)a1;
- (void)beginTrafficClassFlowSnapshot;
- (id)infoDir;
- (void)noteNewUsage:(unsigned int)a0;

@end
