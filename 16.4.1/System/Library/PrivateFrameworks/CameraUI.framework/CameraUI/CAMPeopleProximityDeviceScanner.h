@class NSMutableDictionary, NSString, NSObject, SFDeviceDiscovery;
@protocol OS_dispatch_queue, CAMPeopleProximityScannerDelegate;

@interface CAMPeopleProximityDeviceScanner : NSObject <CAMPeopleProximityScanner>

@property (retain, nonatomic) SFDeviceDiscovery *_queue_deviceDiscovery;
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredDevices;
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredIdentities;
@property (nonatomic) unsigned int _queue_sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<CAMPeopleProximityScannerDelegate> delegate;
@property (readonly, nonatomic) BOOL isScanning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stopDiscovery;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_queue_discoveryActivatedWithError:(id)a0 sessionID:(unsigned int)a1;
- (void)_queue_discoveryDeviceFound:(id)a0 sessionID:(unsigned int)a1;
- (void)_queue_discoveryDeviceLost:(id)a0 sessionID:(unsigned int)a1;
- (void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)a0;
- (void)_queue_discoveryTimeoutForSessionID:(unsigned int)a0;
- (void)startDiscoveryWithScanRate:(unsigned long long)a0 timeout:(double)a1;

@end
