@class UIImageView, NTKRichComplicationRingProgressView, NTKColoringLabel;

@interface NTKAlarmRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    UIImageView *_idleImageView;
    NTKColoringLabel *_timeLabel;
    NTKColoringLabel *_designatorLabel;
    UIImageView *_snoozeImageView;
    NTKRichComplicationRingProgressView *_snoozeProgressView;
    struct { double timeLabel12HourLayoutFontSize; double timeLabel12HourLayoutMaxWidth; double timeLabel12HourTimeLeadingLayoutBottom; double timeLabel12HourDesignatorLeadingLayoutBottom; double timeLabel24HourLayoutFontSize; double timeLabel24HourLayoutMaxWidth; double timeLabel24HourLayoutBottom; double timeLabeSnoozeLayoutFontSize; double timeLabeSnoozeLayoutMaxWidth; double timeLabelSnoozeLayoutBottom; double designatorLabelFontSize; double designatorLabelMaxWidth; double designatorLabel12HourTimeLeadingLayoutBottom; double designatorLabel12HourDesignatorLeadingLayoutBottom; double snoozeIconTop; double snoozeRingStrokeWidth; } _layoutConstants;
    unsigned long long _layout;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)makeBackgroundTransparent;

@end
