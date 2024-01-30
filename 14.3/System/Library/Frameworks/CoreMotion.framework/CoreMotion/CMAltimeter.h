@interface CMAltimeter : NSObject {
    id _internal;
}

@property (nonatomic) double absoluteAltitudeUpdateInterval;

+ (void)initialize;
+ (long long)authorizationStatus;
+ (BOOL)isRelativeAltitudeAvailable;
+ (BOOL)isAbsoluteAltitudeAvailable;
+ (BOOL)isSignificantElevationAvailable;
+ (void)dummySelector:(id)a0;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)deallocPrivate;
- (void)onFilteredPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)stopRelativeAltitudeUpdatesPrivate;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopRelativeAltitudeUpdates;
- (void)stopSignificantElevationUpdates;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopAbsoluteAltitudeUpdates;
- (void)pauseAbsoluteAltitudeUpdates;
- (void)resumeAbsoluteAltitudeUpdates;

@end
