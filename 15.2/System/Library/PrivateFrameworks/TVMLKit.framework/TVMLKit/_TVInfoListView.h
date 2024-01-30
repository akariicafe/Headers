@class NSArray, UIView;

@interface _TVInfoListView : UIView

@property (nonatomic) long long maxLineCount;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSArray *infos;
@property (copy, nonatomic) NSArray *groupedInfos;

+ (id)infoListViewWithElement:(id)a0 existingView:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)_maxWidthForGroupInfos:(id)a0;
- (void)_layouCellContentView:(id)a0 inCellBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
