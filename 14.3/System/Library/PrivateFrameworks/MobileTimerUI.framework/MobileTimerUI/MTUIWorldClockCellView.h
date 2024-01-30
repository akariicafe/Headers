@class UILabel, NSTimeZone, MTUIDigitalClockLabel;
@protocol MTUIWorldClockCellViewDelegate;

@interface MTUIWorldClockCellView : UIView <MTClock> {
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    BOOL _editing;
}

@property (weak, nonatomic) id<MTUIWorldClockCellViewDelegate> delegate;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) MTUIDigitalClockLabel *digitalClock;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UILabel *combinedLabel;
@property (nonatomic) BOOL shouldStackViews;
@property (readonly, nonatomic) long long runMode;

+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3 hoursOnly:(BOOL)a4;
+ (double)defaultHeight;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3;

- (void)setTimeZone:(id)a0;
- (double)updateInterval;
- (void)_configureFonts;
- (void).cxx_destruct;
- (void)significantTimeChange:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)updateLabelAdjustFontSize;
- (void)stop;
- (void)handleTextSizeChange:(id)a0;
- (void)updateTime;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTimeContinuously:(long long)a0;
- (void)start;
- (void)localeChange:(id)a0;
- (double)coarseUpdateInterval;

@end
