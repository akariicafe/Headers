@class NSString, AAUICodeEntryContext;

@interface AAUICodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    NSString *_pinInstructions;
}

@property (retain, nonatomic) AAUICodeEntryContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setPane:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithContext:(id)a0;
- (BOOL)simplePIN;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)stringsBundle;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (id)pinInstructionsPrompt;
- (BOOL)validatePIN:(id)a0;
- (void)didCancelEnteringPIN;
- (void)_enableUserInteractionAndStopSpinner;
- (void)_disableUserInteractionAndStartSpinner;
- (void)_showIncorrectCodeAlert;

@end
