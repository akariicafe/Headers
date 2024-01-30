@class UIImageView, UILabel, NSArray;

@interface GKOnboardingWhatsNewListCell : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSArray *normalConstraints;
@property (retain, nonatomic) NSArray *axConstraints;
@property (readonly, nonatomic) unsigned long long currentCellType;

- (id)initWithType:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)createConstarints;
- (id)getIconImageFromBundle:(id)a0;
- (id)getIconImageFromSFSymbol:(id)a0;
- (void)setupCell;

@end
