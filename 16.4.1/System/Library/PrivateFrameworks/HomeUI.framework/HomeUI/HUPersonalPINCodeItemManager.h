@class HMHome, HFStaticItem, HFPinCodeManager;

@interface HUPersonalPINCodeItemManager : HFItemManager

@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFStaticItem *pinCodeValueItem;
@property (retain, nonatomic) HFStaticItem *pinCodeChangeItem;
@property (retain, nonatomic) HFStaticItem *shareButtonItem;
@property (retain, nonatomic) HFStaticItem *createUserPINButtonItem;
@property (retain, nonatomic) HFStaticItem *removeUserPINButtonItem;
@property (nonatomic) BOOL operationInProgress;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)_itemsToUpdateForApplicationResignActive;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (id)initWithDelegate:(id)a0 item:(id)a1 pinCodeManager:(id)a2 home:(id)a3;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
