@class NSUUID, NSObject, SFDeviceDiscovery;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKProximityDetector : NSObject {
    SFDeviceDiscovery *_nearbyInfoDiscovery;
    BOOL _advertisingDeviceNearby;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_discoveryQueue;
    unsigned int _powerAssertionIdentifier;
}

@property (readonly, nonatomic) NSUUID *advertisingDeviceUUID;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) BOOL isDetecting;

- (void)endDetecting;
- (void)_createPowerAssertion;
- (id /* block */)_createDeviceFoundBlockWithName:(id)a0;
- (id /* block */)_createDeviceLostBlockWithName:(id)a0;
- (id /* block */)_createDiscoveryActivationBlockWithName:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)_queue_endDetecting;
- (void)_endPowerAssertion;
- (id)initWithAdvertisingDeviceUUID:(id)a0;
- (void)startDetectingWithDuration:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
