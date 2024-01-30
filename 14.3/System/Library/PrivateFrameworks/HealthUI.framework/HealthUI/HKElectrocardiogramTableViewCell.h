@class HKElectrocardiogram, HKElectrocardiogramCardView, NSLayoutConstraint;

@interface HKElectrocardiogramTableViewCell : UITableViewCell

@property (retain, nonatomic) HKElectrocardiogramCardView *cardView;
@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (nonatomic) BOOL bottomPaddingDisabled;

+ (id)defaultReuseIdentifier;
+ (double)estimatedHeight;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupConstraints;
- (void)_setupUIWithSample:(id)a0 dateCache:(id)a1 onboarding:(BOOL)a2 activeAlgorithmVersion:(long long)a3;
- (void)setActiveAlgorithmVersion:(long long)a0;
- (id)initWithSample:(id)a0 dateCache:(id)a1 onboarding:(BOOL)a2 activeAlgorithmVersion:(long long)a3;

@end
