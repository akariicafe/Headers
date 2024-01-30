@interface CMAltimeter : NSObject {
    id _internal;
}

+ (void)initialize;
+ (void)dummySelector:(id)a0;
+ (BOOL)isRelativeAltitudeAvailable;
+ (BOOL)isAbsoluteAltitudeAvailable;
+ (BOOL)isSignificantElevationAvailable;
+ (long long)authorizationStatus;

- (id)initPrivate;
- (id)init;
- (void)deallocPrivate;
- (void)onFilteredPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopRelativeAltitudeUpdates;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopSignificantElevationUpdates;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)stopAbsoluteAltitudeUpdates;
- (void)startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)pauseAbsoluteAltitudeUpdates;
- (void)resumeAbsoluteAltitudeUpdates;
- (void)dealloc;

@end
