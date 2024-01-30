@interface CMAltimeter : NSObject {
    id _internal;
}

+ (void)initialize;
+ (long long)authorizationStatus;
+ (void)dummySelector:(id)a0;
+ (BOOL)isSignificantElevationAvailable;
+ (BOOL)isAbsoluteAltitudeAvailable;
+ (BOOL)isRelativeAltitudeAvailable;

- (id)initPrivate;
- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (void)stopSignificantElevationUpdates;
- (void)onFilteredPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)pauseAbsoluteAltitudeUpdates;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)resumeAbsoluteAltitudeUpdates;
- (void)startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteAltitudeUpdates;
- (void)stopRelativeAltitudeUpdates;
- (void)stopRelativeAltitudeUpdatesPrivate;

@end
