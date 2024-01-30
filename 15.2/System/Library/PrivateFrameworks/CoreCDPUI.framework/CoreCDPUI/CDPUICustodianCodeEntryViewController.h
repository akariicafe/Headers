@class NSString, CDPUICodeEntryViewModel;

@interface CDPUICustodianCodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    CDPUICodeEntryViewModel *_viewModel;
    NSString *_pinInstructions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setPane:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)simplePIN;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)stringsBundle;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (id)pinInstructionsPrompt;
- (BOOL)validatePIN:(id)a0;
- (void)_enableUserInteractionAndStopSpinner;
- (void)_disableUserInteractionAndStartSpinner;

@end
