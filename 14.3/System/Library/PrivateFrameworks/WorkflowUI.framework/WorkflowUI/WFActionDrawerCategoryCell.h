@class NSArray, UIImageView, NSString, UILabel, WFActionDrawerCategoriesMetrics;

@interface WFActionDrawerCategoryCell : UICollectionViewCell <UIPointerInteractionDelegate>

@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (retain, nonatomic) NSArray *verticalStackConstraints;
@property (retain, nonatomic) NSArray *horizontalStackConstraints;
@property (nonatomic) BOOL shouldStackVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustStackingStyle;
- (void)configureWithWorkflowCategoryTitle:(id)a0 icon:(id)a1 shouldStackVertically:(BOOL)a2;

@end
