@class UIStackView, NSArray, NSString, UIFontDescriptor, CLKDevice;
@protocol CLKMonochromeFilterProvider, NWCHourlyForecastViewBuildable, NWMDataFormatter;

@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView>

@property (class, readonly) unsigned long long maximumHourlyConditionCount;

@property (retain, nonatomic) id<NWCHourlyForecastViewBuildable> viewBuilder;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) NSArray *hourlyForecastViews;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) id<NWMDataFormatter> dataFormatter;
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
- (void)_addHourlyForecastViewsToStackView:(id)a0;
- (id)_setupViewBuilderForDevice:(id)a0;
- (void)processHourlyForecastEntryModels:(id)a0 forTimeZone:(id)a1;
- (void)processSimpleEntryModel:(id)a0;

@end
