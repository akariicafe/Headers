@class NSArray;

@interface DOCStackedThumbnailView : UIView

@property (retain, nonatomic) NSArray *thumbnailImageViews;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *URLs;
@property (nonatomic) struct CGSize { double width; double height; } topThumbnailSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateURLs;
- (void)createThumbnailViewsWithCount:(unsigned long long)a0 createViewForIndex:(id /* block */)a1;
- (id)initWithTopThumbnailSize:(struct CGSize { double x0; double x1; })a0;

@end
