@protocol PSBillingPeriodSelectorSpecifierDelegate;

@interface PSBillingPeriodSelectorSpecifier : PSSpecifier <PSBillingPeriodSource>

@property (nonatomic) unsigned long long selectedPeriod;
@property (weak, nonatomic) id<PSBillingPeriodSelectorSpecifierDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithStatisticsCache:(id)a0;
- (void)refreshSelectorWithStatisticsCache:(id)a0;
- (void)setBillingPeriod:(id)a0 specifier:(id)a1;
- (id)getBillingPeriod:(id)a0;

@end
