@class SearchUILabel, SearchUIImageView;

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;

@end
