@class NSString, NSMutableArray, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {
    BOOL _showAddPlan;
    NSMutableArray *_danglingPlanItems;
    NSString *_iccid;
    UIBarButtonItem *_cancelButton;
}

@property (retain) NSMutableArray *currentItemsForIMessage;
@property BOOL inBuddy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)needsToRun:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (id)initWithIccid:(id)a0 showAddPlan:(BOOL)a1 allowDismiss:(BOOL)a2;
- (id)nextViewControllerFrom:(id)a0;

@end
