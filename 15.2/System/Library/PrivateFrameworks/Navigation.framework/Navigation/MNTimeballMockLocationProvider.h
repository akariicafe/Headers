@class NSObject, NSString, CLLocationManager, CLLocation, NSLock, NSMutableArray;
@protocol OS_dispatch_queue, CLLocationManagerDelegate, OS_dispatch_source;

@interface MNTimeballMockLocationProvider : NSObject <MNTimeballLocationProvider> {
    BOOL _deliveringUpdates;
    NSLock *_objectLock;
    NSMutableArray *_queuedObjects;
    NSMutableArray *_delayIntervals;
    CLLocationManager *_lm;
    CLLocation *_location;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (nonatomic) double desiredAccuracy;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingLocation;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startUpdatingLocation;
- (id)initWithEffectiveBundle:(id)a0 delegate:(id)a1 onQueue:(id)a2;
- (void).cxx_destruct;
- (id)initWithEffectiveBundleIdentifier:(id)a0 delegate:(id)a1 onQueue:(id)a2;
- (void)_setupTimer;
- (void)_processNextObject;
- (void)_deliverNextObject;
- (void)deliverLocation:(id)a0 afterDelay:(double)a1;
- (void)deliverError:(id)a0 afterDelay:(double)a1;
- (void)clearLocationsAndErrors;

@end
