@class UIColor, NSString, CALayer;
@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView> {
    struct { struct CGPoint { double x; double y; } minuteHandAnchorPoint; struct CGPoint { double x; double y; } hourHandAnchorPoint; double pegDotDiameter; NSString *hourHandImageName; NSString *hourShadowImageName; NSString *minuteHandImageName; NSString *minuteShadowImageName; } _layoutConstants;
    CALayer *_pegDot;
}

@property (retain, nonatomic) UIColor *pegDotColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initForDevice:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)createHourHandView;
- (id)createMinuteHandView;
- (id)createSecondHandView;
- (double)_timeAnimationFramesPerSecondForDevice:(id)a0;
- (long long)complicationFamily;
- (long long)displayedHour;

@end
