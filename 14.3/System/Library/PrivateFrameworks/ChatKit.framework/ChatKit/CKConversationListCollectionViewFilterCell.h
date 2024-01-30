@class UISegmentedControl;

@interface CKConversationListCollectionViewFilterCell : UICollectionViewCell

@property (retain, nonatomic) UISegmentedControl *filterControl;

+ (id)reuseIdentifier;
+ (double)defaultHeight:(long long)a0;

- (void).cxx_destruct;
- (void)configureForTitles:(id)a0;
- (void)layoutSubviews;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
