@class PSUICoreTelephonyCallCache, NSString, CXCallObserver, CTCellularPlanManager, PSUICellularPlanUniversalReference, PSListController, PSUICellularPlanManagerCache;

@interface PSUITurnOnThisLineSpecifier : PSSpecifier <CXCallObserverDelegate>

@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void).cxx_destruct;
- (void)_showPromptFor:(id)a0;
- (id)_getAlertMessage:(id)a0 onPad:(BOOL)a1;
- (void)_turnItOff;
- (void)_useLine:(BOOL)a0 forPlan:(id)a1;
- (id)initWithPlanUniversalReference:(id)a0 cellularPlanManager:(id)a1 planManagerCache:(id)a2 callCache:(id)a3 hostController:(id)a4 isActivating:(BOOL)a5;
- (id)isPlanEnabled:(id)a0;
- (BOOL)isPlanStatusActivatingPostinstall:(id)a0;
- (BOOL)isTransferredPlan:(id)a0;
- (void)setPlanEnabled:(id)a0 specifier:(id)a1;
- (void)setSwitchEnabled;

@end
