@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad {
    SBUIButton *_actionButton;
}

- (void).cxx_destruct;
- (void)setShowsCancelButton:(BOOL)a0;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (id)initWithLightStyle:(BOOL)a0;
- (void)_layoutStatusView;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_setShowsEmergencyCallButton:(BOOL)a0 fromCancelButton:(BOOL)a1;
- (void)_setShowsCancelButton:(BOOL)a0 fromEmergencyCallButton:(BOOL)a1;
- (void)_configureActionButton;
- (void)_sizeLabel:(id)a0;

@end
