@class _CLLocationManagerRoutineProxy;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) id<CLLocationManagerDelegate> delegate;

- (void)stopUpdatingLocation;
- (id)initWithQueue:(id)a0;
- (void)startUpdatingLocation;
- (id)init;
- (void)dealloc;

@end
