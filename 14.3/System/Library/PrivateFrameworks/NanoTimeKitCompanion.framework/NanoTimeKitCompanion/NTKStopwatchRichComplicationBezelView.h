@class NTKColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {
    NTKColoringLabel *_textLabel;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)_applyPausedUpdate;
- (void)_updateTextProvider;

@end
