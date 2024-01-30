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

- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)initWithPlanUniversalReference:(id)a0 cellularPlanManager:(id)a1 planManagerCache:(id)a2 callCache:(id)a3 hostController:(id)a4;
- (void)setPlanEnabled:(id)a0 specifier:(id)a1;
- (id)isPlanEnabled:(id)a0;
- (void)setSwitchEnabled;

@end
