@class SearchUILabel, TLKStackView;

@interface SearchUICompactCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (id)richTextForSearchUIText:(id)a0 withMaxLines:(unsigned long long)a1;

@end
