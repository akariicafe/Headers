@class NSObject;
@protocol OS_dispatch_queue;

@interface CMPedometerProxy : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    void *fLocationdConnection;
    id /* block */ fOffsetUpdateHandler;
    id /* block */ fCumulativeUpdateHandler;
    long long fStepCountFromStart;
    long long fPushCountFromStart;
    long long fStepCountOffset;
    long long fPushCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fActiveTimeFromStart;
    double fActiveTimeOffset;
    double fValidStartDate;
    BOOL fStopUpdates;
    BOOL fFloorCountingAvailable;
    BOOL fPaceAndCadenceAvailable;
    id /* block */ fEventHandler;
    BOOL fStopEventUpdates;
    int fWorkoutType;
    int fElevationAscendedStart;
    int fElevationAscendedOffset;
    int fElevationDescendedStart;
    int fElevationDescendedOffset;
    BOOL fElevationCountingAvailable;
    int fDistanceSource;
}

- (void)_stopPedometerUpdates;
- (void)_queryPedometerCalibrationBinsWithHandler:(id /* block */)a0 forType:(long long)a1 forRemote:(BOOL)a2;
- (void)_queryPedometerDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1 shouldStartUpdates:(BOOL)a2;
- (void)_startPedometerUpdatesFromDate:(id)a0 withHandler:(id /* block */)a1;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)_stopPedometerEventUpdates;
- (void)_internalQueryPedometerDataFromDate:(id)a0 toDate:(id)a1 onQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)init;
- (void)_teardown;
- (void)_queryPedometerDataFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_subscribeToCumulativePedometerUpdates:(id /* block */)a0;
- (void)_handleRecordQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1 shouldStartUpdates:(BOOL)a2;
- (void)dealloc;
- (void)_startPedometerEventUpdatesWithHandler:(id /* block */)a0;
- (id)_strideCalibrationDump;
- (void)_startPedometerUpdatesSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;

@end
