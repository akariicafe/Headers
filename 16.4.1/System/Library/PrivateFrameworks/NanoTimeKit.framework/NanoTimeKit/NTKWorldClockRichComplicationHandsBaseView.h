@class UIColor, NSString, NTKAnalogHandConfiguration;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView> {
    struct { double pegDotDiameter; NTKAnalogHandConfiguration *hourHandConfig; NTKAnalogHandConfiguration *minuteHandConfig; } _layoutConstants;
    BOOL _showGossamerUI;
}

@property (readonly, nonatomic) long long displayedHour;
@property (retain, nonatomic) UIColor *pegDotColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showsSecondHand;

- (void).cxx_destruct;
- (long long)complicationFamily;
- (void)layoutHandViews;
- (double)_timeAnimationFramesPerSecondForDevice:(id)a0;
- (id)createSecondHandView;
- (id)hourHandConfiguration;
- (id)initForDevice:(id)a0;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
