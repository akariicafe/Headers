@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSimpleRowView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)prefersNoSeparatorAboveCardSection:(id)a0;
+ (BOOL)hasLeadingImageForCardSection:(id)a0;
+ (id)dragTitleForCardSection:(id)a0;
+ (id)dragSubtitleForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;
- (id)leadingTextView;

@end
