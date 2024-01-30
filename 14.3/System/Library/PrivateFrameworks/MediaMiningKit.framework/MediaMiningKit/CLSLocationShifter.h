@class GEOLocationShifter, NSObject;
@protocol OS_dispatch_queue;

@interface CLSLocationShifter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *locationShiftQueue;
@property (readonly, nonatomic) GEOLocationShifter *locationShifter;

+ (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
+ (id)sharedLocationShifter;

- (id)init;
- (void).cxx_destruct;
- (struct { double x0; double x1; })shiftedCoordinateForOriginalCoordinate:(struct { double x0; double x1; })a0;

@end
