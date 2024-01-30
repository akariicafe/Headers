@interface CoreCDPUI.AdvancedDataProtectionViewModel : CoreCDPUI.AdvancedDataProtectionViewModelInterface <CDPUIAdvancedDataProtectionStateManager> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)stopSpinner;
- (void)startSpinner;
- (void)setNetworkError;
- (void)setRepairError;
- (void)setRepaired;
- (void)setUnavailable;
- (void)setUnknown;
- (void).cxx_destruct;

@end
