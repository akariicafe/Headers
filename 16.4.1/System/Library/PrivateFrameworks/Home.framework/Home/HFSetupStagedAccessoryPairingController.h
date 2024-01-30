@class NSHashTable, HFDiscoveredAccessory, NSString, HMHome, NSSet, HFSetupPairingContext, HFSetupAccessoryResult, HMAccessorySetupCompletedInfo;

@interface HFSetupStagedAccessoryPairingController : NSObject <HFSetupPairingController>

@property (class, readonly, nonatomic) BOOL supportsSetupPayloadRetry;

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSHashTable *pairingObservers;
@property (retain, nonatomic) NSSet *pairedAccessories;
@property (retain, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property (retain, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (retain, nonatomic) NSString *statusTitle;
@property (retain, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) HFSetupPairingContext *context;
@property (retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cancel;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)addPairingObserver:(id)a0;
- (void)removePairingObserver:(id)a0;
- (void)startWithHome:(id)a0;

@end
