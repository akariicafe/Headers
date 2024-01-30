@class NTKCalendarRichComplicationContentView, NSArray;

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView

@property (retain, nonatomic) NTKCalendarRichComplicationContentView *contentView;
@property (retain, nonatomic) NSArray *accentViews;
@property (retain, nonatomic) NSArray *desaturateViews;

- (void).cxx_destruct;
- (id)init;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_updateViews:(id)a0 withFilter:(id)a1;

@end
