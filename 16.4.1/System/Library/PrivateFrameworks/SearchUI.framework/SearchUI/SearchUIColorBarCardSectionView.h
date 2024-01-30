@class NUIContainerBoxView, SearchUILabel, NUIContainerStackView, UIView;

@interface SearchUIColorBarCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (retain, nonatomic) NUIContainerBoxView *multilineTopTextLabelContainer;
@property (retain, nonatomic) UIView *colorBarView;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *spacerTextLabel;
@property (retain, nonatomic) SearchUILabel *topTextlabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void).cxx_destruct;
- (id)setupContentView;

@end
