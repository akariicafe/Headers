@class CNContactStore, NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, CAMPeopleProximityScanner, CAMPeopleProximityDelegate;

@interface CAMPeopleProximityController : NSObject <CAMPeopleProximityScannerDelegate, CAMPeopleProximityControllerProtocol>

@property (weak, nonatomic) id<CAMPeopleProximityDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long queue_discoveryState;
@property (retain, nonatomic) NSSet *queue_identities;
@property (retain, nonatomic) CNContactStore *queue_contactStore;
@property (nonatomic) BOOL queue_hasDiscoveredFirstPerson;
@property (nonatomic) BOOL queue_hasDiscoveredFirstPersonNearby;
@property (retain, nonatomic) id<CAMPeopleProximityScanner> queue_proximityScanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class proximityScannerClass;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)stopDiscovery;
- (void).cxx_destruct;
- (void)_queue_handleFinishedWaitingForScanner:(id)a0;
- (void)_queue_handleScannerDidStop;
- (void)_queue_startDiscoveryForIdentities:(id)a0;
- (void)_queue_stopDiscovery;
- (void)peopleProximityScanner:(id)a0 didDiscoverIdentity:(id)a1 distance:(unsigned long long)a2 rssi:(long long)a3;
- (void)peopleProximityScanner:(id)a0 didLoseIdentity:(id)a1;
- (BOOL)peopleProximityScanner:(id)a0 shouldDiscoverIdentity:(id)a1;
- (void)peopleProximityScannerDidStopDiscovery:(id)a0;
- (void)startDiscoveryForIdentities:(id)a0;

@end
