@class PSListController, Logger, NSArray, PSSimStatusCache, PSUICellularPlanManagerCache, PSUICellularDataListItemsController, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, PSUICoreTelephonyDataCache;

@interface PSUICellularDataSpecifier : PSSpecifier {
    Logger *_logger;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (retain, nonatomic) PSUIDeviceWiFiState *wifiState;
@property (retain, nonatomic) NSArray *cachedPlanItems;
@property (weak, nonatomic) PSUICellularDataListItemsController *detailController;

- (void)setAirplaneMode:(BOOL)a0;
- (id)getLogger;
- (void).cxx_destruct;
- (void)updateCachedState;
- (id)planItemForListItem:(id)a0;
- (id)subscriptionContextForListItem:(id)a0;
- (id)initWithHostController:(id)a0;
- (BOOL)isDetailControllerNeeded;
- (id)initWithHostController:(id)a0 simStatusCache:(id)a1 planManagerCache:(id)a2 callCache:(id)a3 dataCache:(id)a4 wifiState:(id)a5;
- (void)setCellularDataEnabled:(id)a0 specifier:(id)a1;
- (id)isCellularDataEnabled:(id)a0;
- (id)_isCellularDataEnabled:(id)a0;
- (void)_setCellularDataEnabled:(id)a0 specifier:(id)a1;
- (id)callEndConfirmationSpecifier;
- (void)acceptedDataSwitch:(id)a0;
- (void)setCellularDataSwitch:(BOOL)a0;
- (void)_acceptedDataSwitch:(id)a0;
- (void)_setCellularDataSwitch:(id)a0;
- (void)canceledDataSwitch:(id)a0;

@end
