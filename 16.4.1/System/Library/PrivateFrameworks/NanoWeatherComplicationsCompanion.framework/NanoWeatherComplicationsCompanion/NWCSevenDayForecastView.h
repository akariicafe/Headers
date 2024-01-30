@class UIStackView, NSArray, NSString, UIFontDescriptor, NWCDailyForecastRangeView, CLKDevice;
@protocol NWCDailyForecastViewBuildable, CLKMonochromeFilterProvider;

@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView>

@property (class, readonly) unsigned long long maximumDailyConditionCount;

@property (retain, nonatomic) id<NWCDailyForecastViewBuildable> viewBuilder;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) NWCDailyForecastRangeView *dailyForecastRangeView;
@property (retain, nonatomic) NSArray *dailyForecastViews;
@property (readonly, nonatomic) CLKDevice *device;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyConstraints;
- (void)_addDailyForecastViewsToStackView:(id)a0;
- (id)_setupViewBuilderForDevice:(id)a0;
- (void)processConditions:(id)a0 dailyForecastedConditions:(id)a1 timeZone:(id)a2;
- (void)processSimpleEntryModel:(id)a0;

@end
