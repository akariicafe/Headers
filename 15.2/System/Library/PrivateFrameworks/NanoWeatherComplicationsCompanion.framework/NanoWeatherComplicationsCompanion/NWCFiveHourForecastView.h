@class NSArray, NSString, UIStackView;
@protocol CLKMonochromeFilterProvider, NWMDataFormatter;

@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView>

@property (class, readonly) unsigned long long maximumHourlyConditionCount;

@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) NSArray *hourlyForecastViews;
@property (readonly, nonatomic) Class hourlyForecastViewClass;
@property (readonly, nonatomic) id<NWMDataFormatter> dataFormatter;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (void)_applyConstraints;
- (void)_addHourlyForecastViewsToStackView:(id)a0;
- (void)processHourlyForecastEntryModels:(id)a0 forTimeZone:(id)a1;

@end
