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
    struct deque<float, std::__1::allocator<float> > { struct __split_buffer<float *, std::__1::allocator<float *> > { float **__first_; float **__begin_; float **__end_; struct __compressed_pair<float **, std::__1::allocator<float *> > { float **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<float> > { unsigned long long __value_; } __size_; } fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
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

- (void)_teardown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleAbsoluteAltitudeUpdate:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)_releaseHandlerObjects;
- (void)_startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_stopElevationUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)_stopSignificantElevationUpdates;
- (void)_startRelativeAltitudeUpdates;
- (id).cxx_construct;
- (void)_querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_stopRelativeAltitudeUpdates;
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAbsoluteAltitudeUpdates;
- (void)_pauseAbsoluteAltitudeUpdates;
- (void)_resumeAbsoluteAltitudeUpdates;

@end
