@class UIStackView, NSArray, NSString, NWCDailyForecastRangeView;
@protocol CLKMonochromeFilterProvider;

@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView>

@property (class, readonly) unsigned long long maximumDailyConditionCount;
@property (class, readonly, nonatomic) BOOL tritium_wantsCrossfadeAnimation;

@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) NWCDailyForecastRangeView *dailyForecastRangeView;
@property (retain, nonatomic) NSArray *dailyForecastViews;
@property (readonly, nonatomic) Class dailyForecastViewClass;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (void)_applyConstraints;
- (void)_addDailyForecastViewsToStackView:(id)a0;
- (void)processConditions:(id)a0 dailyForecastedConditions:(id)a1 timeZone:(id)a2;

@end
