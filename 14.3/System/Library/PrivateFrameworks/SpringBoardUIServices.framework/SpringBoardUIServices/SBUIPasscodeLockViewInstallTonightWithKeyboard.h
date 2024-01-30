@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightWithKeyboard : SBUIPasscodeLockViewWithKeyboard {
    SBUIButton *_actionButton;
}

- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_configureActionButton;
- (void).cxx_destruct;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (void)setShowsCancelButton:(BOOL)a0;
- (id)initWithLightStyle:(BOOL)a0;
- (void)_layoutStatusView;

@end
