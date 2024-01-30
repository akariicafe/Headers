@class UIImageView, NSArray;

@interface HUMediaServiceTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) UIImageView *serviceIconView;
@property BOOL iconImageLoadingInProgress;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_loadServiceIconImage;
- (void)_updateContentMetrics;

@end
