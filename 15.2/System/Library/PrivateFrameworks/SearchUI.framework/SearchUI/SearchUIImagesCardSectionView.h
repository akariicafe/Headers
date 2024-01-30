@class TLKImagesView;

@interface SearchUIImagesCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKImagesView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;

@end
