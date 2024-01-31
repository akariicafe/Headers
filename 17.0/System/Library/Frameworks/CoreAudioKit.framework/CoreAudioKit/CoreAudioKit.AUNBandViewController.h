@interface CoreAudioKit.AUNBandViewController : CoreAudioKit.AURightEdgeControlsBaseViewController {
    void /* unknown type, empty encoding */ controls;
    void /* unknown type, empty encoding */ activeControl;
    void /* unknown type, empty encoding */ numBands;
    void /* unknown type, empty encoding */ hintView;
    void /* unknown type, empty encoding */ noParamDisplayed;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)bandEnabledChangedWithNotification:(id)a0;
- (void)bandSelectionChangedWithNotification:(id)a0;
- (void)globalGainChangedWithNotification:(id)a0;
- (void)globalGainKnobReleasedWithNotification:(id)a0;
- (void)globalGainKnobTouchedWithNotification:(id)a0;
- (void)hintDismissedWithRecognizer:(id)a0;
- (void)typeControlChangedWithSender:(id)a0;

@end
