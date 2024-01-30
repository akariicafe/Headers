@class SearchUIWatchListCardRowModel, NUIContainerStackView, SearchUIButton, TLKSimpleRowView;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIButton *button;
@property (retain, nonatomic) TLKSimpleRowView *rowView;
@property (retain, nonatomic) SearchUIWatchListCardRowModel *rowModel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)didUpdateRowModel:(id)a0 animate:(BOOL)a1;
- (void)updateText:(id)a0 image:(id)a1 buttonState:(long long)a2;

@end
