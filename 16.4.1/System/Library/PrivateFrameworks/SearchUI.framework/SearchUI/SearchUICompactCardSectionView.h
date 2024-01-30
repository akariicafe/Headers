@class SearchUILabel, NUIContainerGridView, SearchUIImageView;

@interface SearchUICompactCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) SearchUIImageView *imageView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;

+ (BOOL)hasLeadingImageForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)leadingTextView;
- (id)setupContentView;
- (id)richTextForSearchUIText:(id)a0 withMaxLines:(unsigned long long)a1;

@end
