@class TACircularBuffer, NSMutableDictionary, TAVisitStateSettings, TAScanRequest, NSHashTable, TAInterVisitMetricsSnapshot;

@interface TAVisitState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TAVisitStateSettings *settings;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) TAScanRequest *scanRequest;
@property (retain, nonatomic) TAInterVisitMetricsSnapshot *interVisitMetricsSnapshotBackup;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) TACircularBuffer *visitSnapshotBuffer;
@property (readonly, nonatomic) TACircularBuffer *interVisitMetricSnapshotBuffer;
@property (readonly, nonatomic) NSMutableDictionary *importantLois;
@property (readonly, nonatomic) BOOL isInSensitiveVisit;

+ (id)visitStateTypeToString:(unsigned long long)a0;

- (void)purgeWithClock:(id)a0;
- (id)getLastestValidVisitDepartureDate;
- (BOOL)setState:(unsigned long long)a0;
- (void)ingestTAEvent:(id)a0 store:(id)a1 appendOutgoingRequestsTo:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void)resetInterVisitBackupSnapshot;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)issueVisitEntryScanRequestIfNecessaryWithOpenSnapshot:(id)a0 clock:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
- (void)labelLoiTypeForLastVisitSnapshot:(id)a0;
- (void)mergeWithAnotherTAVisitState:(id)a0;
- (unsigned long long)stateTransitionDecisionGivenTACLVisit:(id)a0;
- (void)updateInterVisitBackupSnapshotWithStore:(id)a0;
- (void)openInterVisitBackupSnapshotWithArrivalVisit:(id)a0;
- (void)updateInterVisitSnapshotWithStore:(id)a0;
- (id)description;
- (void)closeLatestInterVisitSnapshotWithStore:(id)a0 date:(id)a1;
- (id)getDisplayEventsWithFirstPrecedingInInterval:(id)a0 store:(id)a1;
- (void)purgeInterVisitSnapshotBufferWithCurrentDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)performStateTransitionDecision:(unsigned long long)a0 store:(id)a1 visit:(id)a2 andAppendOutgoingRequestsTo:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)recoverInterVisitSnapshotWithArrivalVisit:(id)a0 store:(id)a1;
- (void)closeVisitSnapshotWithStore:(id)a0 visit:(id)a1;
- (void)openVisitSnapshotWithStore:(id)a0 visit:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
- (void)updateImportantLOIs:(id)a0 currentDate:(id)a1;
- (void)updateInterVisitSnapshot:(id)a0 store:(id)a1;
- (BOOL)shouldCreateNewVisitSnapshotFromUnknownState:(id)a0;
- (void)notifyObserversOfMetricsHint:(unsigned long long)a0;
- (unsigned long long)evaluateLatestVisitSnapshotAndRecoverIfNecessary;
- (void)purgeVisitSnapshotBufferWithCurrentDate:(id)a0;
- (void)notifyObserversOfStateChangeFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)issueInterVisitScanRequestIfNecessaryWithClosedSnapshot:(id)a0 store:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
- (void)openInterVisitSnapshotWithDepartureVisit:(id)a0;
- (id)initWithSettings:(id)a0 scanRequestSettings:(id)a1;

@end
