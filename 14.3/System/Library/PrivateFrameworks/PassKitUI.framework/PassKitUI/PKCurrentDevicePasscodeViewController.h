@class NSString, PKPasscodeUpgradeFlowController;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {
    PKPasscodeUpgradeFlowController *_flowController;
    BOOL _viewHasAppeared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)requiresKeyboard;
- (id)initWithPasscodeUpgradeFlowController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)stringsBundle;
- (id)pinInstructionsPrompt;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
