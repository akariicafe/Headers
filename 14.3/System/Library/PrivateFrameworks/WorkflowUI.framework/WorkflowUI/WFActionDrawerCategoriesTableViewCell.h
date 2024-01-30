@class UICollectionView, UICollectionViewFlowLayout, WFActionDrawerCategoriesCollectionViewManager, WFActionDrawerCategoriesMetrics;

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell

@property (weak, nonatomic) UICollectionView *categoriesCollectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *categoriesFlowLayout;
@property (retain, nonatomic) WFActionDrawerCategoriesCollectionViewManager *categoriesCollectionViewManager;
@property (weak, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (nonatomic) BOOL shouldStackVertically;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)configureWithContentTypeCategories:(id)a0 coordinator:(id)a1 metrics:(id)a2;
- (void)adjustForVerticalStacking;

@end
