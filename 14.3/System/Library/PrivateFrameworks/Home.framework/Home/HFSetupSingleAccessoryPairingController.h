@class NSHashTable, HFDiscoveredAccessory, NSString, NSDate, NSSet, HMHome, HMAccessorySetupCompletedInfo, HFSetupPairingContext, HFSetupAccessoryResult, NAFuture;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController>

@property (class, readonly, nonatomic) BOOL supportsSetupPayloadRetry;

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NAFuture *pairingFuture;
@property (retain, nonatomic) NSDate *phaseStartDate;
@property (nonatomic) BOOL accessoryRequiresCode;
@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property (readonly, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;

- (id)cancel;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)addPairingObserver:(id)a0;
- (void)removePairingObserver:(id)a0;
- (id)initWithContext:(id)a0 discoveredAccessory:(id)a1;
- (void)_assertValidTransitionFromPhase:(unsigned long long)a0 toPhase:(unsigned long long)a1;
- (void)_updateStatusTextAndNotifyDelegate:(BOOL)a0;
- (void)_tryPairing;
- (void)_failPairingWithDiscoveredAccessory:(id)a0 error:(id)a1;
- (void)_finishPairingWithDiscoveredAccessory:(id)a0;
- (void)startWithHome:(id)a0;

@end
