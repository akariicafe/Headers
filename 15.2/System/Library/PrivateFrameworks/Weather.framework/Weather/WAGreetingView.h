@class UIColor, NSString, UIImageView, WATodayAutoupdatingLocationModel, UILabel, NSMutableArray;

@interface WAGreetingView : UIView <WATodayModelObserver>

@property (retain, nonatomic) WATodayAutoupdatingLocationModel *todayModel;
@property (retain, nonatomic) UILabel *natualLanguageDescriptionLabel;
@property (retain, nonatomic) UIImageView *conditionImageView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (nonatomic) BOOL isViewCreated;
@property (retain, nonatomic) UIColor *labelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupConstraints;
- (id)init;
- (void)updateView;
- (void)startService;
- (id)initWithColor:(id)a0;
- (id)_temperature;
- (void)dealloc;
- (void)createViews;
- (void)todayModelWantsUpdate:(id)a0;
- (void)todayModel:(id)a0 forecastWasUpdated:(id)a1;
- (void)_teardownWeatherModel;
- (void)_setupWeatherModel;
- (id)_conditionsImage;
- (void)updateLabelColors;

@end
