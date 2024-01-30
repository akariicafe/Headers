@class UIImageView, UILabel, NSArray;

@interface GKOnboardingWhatsNewListCell : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSArray *normalConstraints;
@property (retain, nonatomic) NSArray *axConstraints;
@property (readonly, nonatomic) unsigned long long currentCellType;

- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (void)setupCell;
- (id)getIconImageFromSFSymbol:(id)a0;
- (id)getIconImageFromBundle:(id)a0;
- (void)createConstarints;

@end
