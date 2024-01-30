@class NSString, PKPasscodeUpgradeFlowController;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {
    PKPasscodeUpgradeFlowController *_flowController;
    BOOL _viewHasAppeared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresKeyboard;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPasscodeUpgradeFlowController:(id)a0;
- (id)pinInstructionsPrompt;
- (id)stringsBundle;

@end
