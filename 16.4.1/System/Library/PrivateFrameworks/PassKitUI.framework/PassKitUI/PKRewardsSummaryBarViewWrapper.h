@class PKSegmentedBarView, PKRewardsSummaryChartBarConfiguration;

@interface PKRewardsSummaryBarViewWrapper : UIView {
    PKSegmentedBarView *_barView;
    PKRewardsSummaryChartBarConfiguration *_configuration;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithBarView:(id)a0 configuration:(id)a1;

@end
