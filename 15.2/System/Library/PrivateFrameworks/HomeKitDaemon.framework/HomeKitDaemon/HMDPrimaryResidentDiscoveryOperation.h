@class NSEnumerator, NSArray, HMFTimer, HMDHome, HMDResidentDevice, NSString, HMDMessageDispatcher;

@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMFLogging, HMFTimerDelegate>

@property (weak) HMDHome *home;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) id /* block */ responseHandler;
@property (retain) NSEnumerator *candidateDestinationsEnumerator;
@property (readonly) NSArray *candidateDestinations;
@property (retain) HMFTimer *sendToNextDestinationTimer;
@property (readonly) HMDResidentDevice *currentPrimaryResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)main;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithHome:(id)a0 messageDispatcher:(id)a1;

@end
