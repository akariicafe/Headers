@class UIColor, NSString, NTKAnalogHandConfiguration;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView> {
    struct { double pegDotDiameter; NTKAnalogHandConfiguration *hourHandConfig; NTKAnalogHandConfiguration *minuteHandConfig; } _layoutConstants;
}

@property (retain, nonatomic) UIColor *pegDotColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsSecondHand;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)createSecondHandView;
- (void)layoutHandViews;
- (id)hourHandConfiguration;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (double)_timeAnimationFramesPerSecondForDevice:(id)a0;
- (long long)complicationFamily;
- (long long)displayedHour;

@end
