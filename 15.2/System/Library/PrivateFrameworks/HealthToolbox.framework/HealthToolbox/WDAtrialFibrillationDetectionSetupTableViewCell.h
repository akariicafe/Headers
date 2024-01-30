@class WDAtrialFibrillationDetectionSetupView;

@interface WDAtrialFibrillationDetectionSetupTableViewCell : UITableViewCell

@property (readonly, nonatomic) WDAtrialFibrillationDetectionSetupView *setupView;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_setUpConstraints;

@end
