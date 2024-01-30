@class NSMapTable, HMCameraProfile, HFExecutionEnvironment, NSDate, NSError, NSString;
@protocol NACancelable;

@interface HFCameraManager : NSObject <HFAccessoryObserver, HFCameraObserver, HFExecutionEnvironmentObserver>

@property (readonly, weak, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) NSMapTable *snapshotRequesters;
@property (readonly, nonatomic) NSMapTable *streamRequesters;
@property (nonatomic) BOOL isRegisteredForEvents;
@property (retain, nonatomic) id<NACancelable> nextSnapshotEvent;
@property (retain, nonatomic) NSDate *snapshotErrorDate;
@property (nonatomic) unsigned long long snapshotErrorCount;
@property (retain, nonatomic) NSError *cachedStreamError;
@property (retain, nonatomic) HFExecutionEnvironment *executionEnvironment;
@property (readonly, nonatomic, getter=arePeriodicSnapshotsEnabled) BOOL periodicSnapshotsEnabled;
@property (readonly, nonatomic, getter=isContinuousStreamingEnabled) BOOL continuousStreamingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cameraUserSettingsDidUpdate:(id)a0;
- (void)dealloc;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (void)cameraStreamControl:(id)a0 didStopStreamWithError:(id)a1;
- (void)cameraSnapshotControl:(id)a0 didTakeSnapshot:(id)a1 error:(id)a2;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)a0;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (void)executionEnvironmentWillResignActive:(id)a0;
- (void)executionEnvironmentDidBecomeVisible:(id)a0;
- (void)executionEnvironmentDidBecomeOccluded:(id)a0;
- (id)initWithCameraProfile:(id)a0;
- (void)endPeriodicSnapshotsWithRequester:(id)a0;
- (void)_beginPeriodicSnapshots;
- (void)_updateEventRegistration;
- (void)_endPeriodicSnapshots;
- (void)endContinuousStreamingWithRequester:(id)a0;
- (void)_beginContinuousStreaming;
- (void)_endContinuousStreaming;
- (void)_scheduleNextSnapshotEventWithPreviousError:(id)a0;
- (void)_cancelNextSnapshotEvent;
- (double)_snapshotTimeInterval;
- (BOOL)_hasSnapshotRequesters;
- (id)_nextSnapshotDate;
- (void)_startStreaming;
- (void)_stopStreaming;
- (BOOL)_hasStreamRequesters;
- (void)_dispatchStreamStateUpdate;
- (void)beginPeriodicSnapshotsWithRequester:(id)a0;
- (void)beginContinuousStreamingWithRequester:(id)a0;

@end
