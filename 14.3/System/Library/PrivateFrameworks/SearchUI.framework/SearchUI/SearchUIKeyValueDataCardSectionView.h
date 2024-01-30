@class TLKKeyValueView;

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKKeyValueView *contentView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupContentView;
- (id)convertSFKeyValueData:(id)a0;

@end
