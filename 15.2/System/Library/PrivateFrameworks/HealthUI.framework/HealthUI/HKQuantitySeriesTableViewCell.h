@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *currentConstraints;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureLabels;
- (void)_configureLayoutForTraitCollection:(id)a0;
- (id)_makeAccessibilityConstraints;
- (id)_makeConstraints;

@end
