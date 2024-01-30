@class UIStackView, UIView, NSArray, WFURLComponents, NSURL, NSString, WATodayHeaderView, NSMutableArray, WAAQIView, WATodayModel, City;

@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver>

@property (retain, nonatomic) WFURLComponents *URLComponents;
@property (retain, nonatomic) WATodayModel *model;
@property (nonatomic) long long status;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) WATodayHeaderView *headerView;
@property (retain, nonatomic) UIView *afterHeaderDividerLineView;
@property (retain, nonatomic) WAAQIView *aqiView;
@property (retain, nonatomic) UIView *afterAQIDividerLineView;
@property (retain, nonatomic) NSArray *hourlyForecastViews;
@property (retain, nonatomic) UIStackView *hourlyBeltView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (copy, nonatomic) NSURL *commitURL;
@property (retain, nonatomic) City *city;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultViewHeight;

- (id)initWithURL:(id)a0;
- (id)initWithURLComponents:(id)a0;
- (void)updateViewConstraints;
- (BOOL)_canShowWhileLocked;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)init;
- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updateStatus:(long long)a0;
- (void)setupHeaderView;
- (void)_updateViewContent;
- (void)temperatureUnitObserver:(id)a0 didChangeTemperatureUnitTo:(int)a1;
- (double)preferredContentWidth;
- (void)_buildModelForLocation:(id)a0;
- (void)_contentSizeDidUpdate:(id)a0;
- (void)_kickoffLoadingWithLocation:(id)a0 orPerhapsALocationString:(id)a1;
- (void)_loadAQIDataForLocation:(id)a0;
- (BOOL)_showingAQIViewForCity:(id)a0;
- (void)_updateViewWithAQIFromCity:(id)a0;
- (id)initWithLocationString:(id)a0;
- (void)setupAQIView;
- (void)setupAfterAQIDividerView;
- (void)setupAfterHeaderDividerView;
- (void)setupBackgroundView;
- (void)setupHourlyForecast;

@end
