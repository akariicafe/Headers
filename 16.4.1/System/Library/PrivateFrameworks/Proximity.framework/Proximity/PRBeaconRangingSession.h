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

- (void)didFailWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)beaconListener:(id)a0 didChangeState:(unsigned long long)a1;
- (void)beaconListener:(id)a0 didFailWithError:(id)a1;
- (void)beaconListener:(id)a0 didOutputRangeResults:(id)a1;
- (void)startRangingInternal;
- (void)startRangingWithBeaconsMatchingDescriptor:(id)a0;
- (void)stopRangingInternal;
- (void)stopRangingWithBeaconsMatchingDescriptor:(id)a0;

@end
