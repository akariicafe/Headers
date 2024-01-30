@class UIStackView, NSMutableDictionary, UILabel, STUsageReport, NSMutableArray;

@interface STWeeklyReportAppUsageView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *appImageStackView;
@property (retain, nonatomic) STUsageReport *report;
@property (retain, nonatomic) NSMutableArray *topEightImageItems;
@property (retain, nonatomic) NSMutableDictionary *dimensionByUsageItem;

- (void).cxx_destruct;
- (id)_appImageSubviewWithImage:(id)a0 dimension:(double)a1;
- (void)_didFetchIcon:(id)a0;
- (id)initWithUsageReport:(id)a0 useVibrancy:(BOOL)a1;

@end
