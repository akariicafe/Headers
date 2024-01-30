@class NSArray, NSMutableArray, UILayoutGuide;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {
    NSMutableArray *_factoidViews;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
}

@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=factoidViewsInARow) NSArray *factoidViewsInARow;
@property (retain, nonatomic) NSMutableArray *labelConstraints;
@property (nonatomic) BOOL isStandAlone;

- (void)setColumnCount:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)refreshContent:(BOOL)a0;
- (void)refreshColumnCount;
- (void)addWidthAndSideSpacingConstraintsForLabels;

@end
