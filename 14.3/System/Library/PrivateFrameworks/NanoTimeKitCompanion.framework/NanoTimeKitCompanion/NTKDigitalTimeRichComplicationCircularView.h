@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView {
    NTKDigitalTimeLabel *_timeLabel;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateDate;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)timeOffsetChanged;

@end
