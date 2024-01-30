@class SearchUITruncatingListLabel, SearchUILabel;

@interface SearchUISplitCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUILabel *topTitleLabel;
@property (retain, nonatomic) SearchUILabel *secondaryTopTitleLabel;
@property (retain, nonatomic) SearchUITruncatingListLabel *listLabel;
@property (retain, nonatomic) SearchUILabel *bottomTitleLabel;
@property (retain, nonatomic) SearchUILabel *bodyLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;

@end
