@class NSMutableDictionary, RPPeopleDiscovery, NSString, NSObject;
@protocol OS_dispatch_queue, CAMPeopleProximityScannerDelegate;

@interface CAMPeopleProximityRapportScanner : NSObject <CAMPeopleProximityScanner>

@property (retain, nonatomic) RPPeopleDiscovery *_queue_peopleDiscovery;
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredPersons;
@property (retain, nonatomic) NSMutableDictionary *_queue_discoveredIdentities;
@property (nonatomic) unsigned int _queue_peopleDiscoverySessionID;
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
- (void)_queue_discoveryActivatedWithError:(id)a0 timeout:(double)a1 peopleDiscoverySessionID:(unsigned int)a2;
- (void)_queue_discoveryInterruptedWithPeopleDiscoverySessionID:(unsigned int)a0;
- (void)_queue_discoveryInvalidatedWithPeopleDiscoverySessionID:(unsigned int)a0;
- (void)_queue_discoveryPersonChanged:(id)a0 withChangeFlags:(unsigned int)a1 peopleDiscoverySessionID:(unsigned int)a2;
- (void)_queue_discoveryPersonFound:(id)a0 peopleDiscoverySessionID:(unsigned int)a1;
- (void)_queue_discoveryPersonLost:(id)a0 peopleDiscoverySessionID:(unsigned int)a1;
- (void)_queue_discoveryTimeoutForSessionID:(unsigned int)a0;
- (BOOL)_queue_shouldAdvertisePerson:(id)a0;
- (void)startDiscoveryWithScanRate:(unsigned long long)a0 timeout:(double)a1;

@end
