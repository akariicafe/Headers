@class HFTransformItemProvider, HFStaticItem, NSString, HFPinCodeManager, HFAccessoryItemProvider, HMHome;

@interface HUPinCodeDetailsItemManager : HFItemManager <HFPinCodeManagerObserver>

@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFAccessoryItemProvider *locksItemProvider;
@property (retain, nonatomic) HFTransformItemProvider *transformedLocksItemProvider;
@property (retain, nonatomic) HFStaticItem *pinCodeLabelItem;
@property (retain, nonatomic) HFStaticItem *pinCodeValueItem;
@property (retain, nonatomic) HFStaticItem *pinCodeChangeItem;
@property (retain, nonatomic) HFStaticItem *pinCodeRestoreAccessItem;
@property (retain, nonatomic) HFStaticItem *deleteGuestPINCodeItem;
@property (retain, nonatomic) HFStaticItem *personalPINCodeItem;
@property (retain, nonatomic) HFStaticItem *addOrShowHomeKeyItem;
@property (nonatomic) BOOL operationInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 pinCodeManager:(id)a2 home:(id)a3;
- (void)pinCodeManagerDidUpdate:(id)a0 pinCodes:(id)a1;

@end
