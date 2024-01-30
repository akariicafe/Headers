@class NSDate, NSString, HFDiscoveredAccessory, NSHashTable, NSSet, HMHome, NSTimer, HMAccessorySetupCompletedInfo, HFSetupPairingContext, HFSetupAccessoryResult, NAFuture;

@interface HFSetupAutomaticDiscoveryPairingController : NSObject <HFSetupPairingController>

@property (class, readonly, nonatomic) BOOL supportsSetupPayloadRetry;

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NAFuture *pairingFuture;
@property (retain, nonatomic) NSDate *phaseStartDate;
@property (retain, nonatomic) NSTimer *accessoryNotFoundFatalTimeoutTimer;
@property (retain, nonatomic) NSTimer *accessoryNotFoundSoftTimeoutTimer;
@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property (readonly, nonatomic) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cancel;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addPairingObserver:(id)a0;
- (void)removePairingObserver:(id)a0;
- (id)_sendCancellationRequestToHomeKit;
- (void)_failPairingWithError:(id)a0;
- (void)_finishPairingWithAccessories:(id)a0 completedInfo:(id)a1;
- (void)_assertValidTransitionFromPhase:(unsigned long long)a0 toPhase:(unsigned long long)a1;
- (void)_updateStatusTextAndNotifyDelegate:(BOOL)a0;
- (void)startWithHome:(id)a0;

@end
