@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView {
    NTKDigitalTimeLabel *_timeLabel;
}

- (void)updateDate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)timeOffsetChanged;

@end
