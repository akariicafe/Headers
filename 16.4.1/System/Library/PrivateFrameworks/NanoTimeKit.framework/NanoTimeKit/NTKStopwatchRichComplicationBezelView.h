@class CLKUIColoringLabel;

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {
    CLKUIColoringLabel *_textLabel;
}

- (id)init;
- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_updateTextProvider;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
