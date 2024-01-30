@class UIView, TLKSimpleRowView;

@interface SearchUICommandCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSimpleRowView *rowView;
@property (retain, nonatomic) UIView *checkmarkImageView;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)fetchStateForNewRowModel:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
