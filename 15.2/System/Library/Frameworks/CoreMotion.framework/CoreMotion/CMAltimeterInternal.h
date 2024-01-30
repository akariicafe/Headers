@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMAltimeterInternal : NSObject {
    struct Dispatcher { void /* function */ **x0; id x1; } *fFilteredPressureDispatcher;
    id /* block */ fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    struct Sample { double timestamp; struct { float pressure; float temperature; } pressureData; } fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    BOOL fBaselineReceived;
    float fMostRecentFilteredPressure;
    struct deque<float, std::allocator<float>> { struct __split_buffer<float *, std::allocator<float *>> { float **__first_; float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<float>> { unsigned long long __value_; } __size_; } fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    void *fLocationdConnection;
    id /* block */ fHandler;
    id /* block */ fSignificantElevationSampleHandler;
    double fElevationAscendedOffset;
    double fElevationDescendedOffset;
    BOOL fStopSignificantElevationUpdates;
    double fFilteredElevationOffset;
    BOOL fStopRelativeAltitudeUpdates;
    NSOperationQueue *fAbsoluteAltitudeClientQueue;
    id /* block */ fAbsoluteAltitudeClientHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)_handleAbsoluteAltitudeUpdate:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)_teardown;
- (void)_releaseHandlerObjects;
- (void)_startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_stopElevationUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_stopSignificantElevationUpdates;
- (void)_querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_stopRelativeAltitudeUpdates;
- (void)_startRelativeAltitudeUpdates;
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAbsoluteAltitudeUpdates;
- (void)_pauseAbsoluteAltitudeUpdates;
- (void)_resumeAbsoluteAltitudeUpdates;
- (void)dealloc;
- (id).cxx_construct;

@end
