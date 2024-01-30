@class NSString, PRBeaconDescriptor, NSObject, PRBeaconListener;
@protocol OS_os_log, PRBeaconRangingSessionDelegate, OS_dispatch_queue;

@interface PRBeaconRangingSession : NSObject <PRBeaconListenerDelegate> {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    PRBeaconListener *_beaconListener;
    unsigned long long _beaconListenerState;
    PRBeaconDescriptor *_activeDescriptor;
}

@property (weak) id<PRBeaconRangingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startRangingInternal;
- (void)beaconListener:(id)a0 didChangeState:(unsigned long long)a1;
- (void)beaconListener:(id)a0 didFailWithError:(id)a1;
- (void)beaconListener:(id)a0 didOutputRangeResults:(id)a1;
- (void)startRangingWithBeaconsMatchingDescriptor:(id)a0;
- (void)stopRangingWithBeaconsMatchingDescriptor:(id)a0;
- (void)stopRangingInternal;

@end
