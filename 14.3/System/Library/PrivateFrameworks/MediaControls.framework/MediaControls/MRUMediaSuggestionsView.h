@class UICollectionView, UICollectionViewCompositionalLayout;

@interface MRUMediaSuggestionsView : UIView

@property (readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;

- (void)updateLayout;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (long long)numberOfColumns;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)itemWidthForWidth:(double)a0;
- (double)itemHeightForItemWidth:(double)a0;

@end
