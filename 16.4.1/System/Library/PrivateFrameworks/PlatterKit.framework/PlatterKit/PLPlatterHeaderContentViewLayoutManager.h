@class UIButton, NSArray, PLPlatterHeaderContentView, UILabel, NSDate, UIView;

@interface PLPlatterHeaderContentViewLayoutManager : NSObject

@property (readonly, nonatomic, getter=_shouldReverseLayoutDirection) BOOL shouldReverseLayoutDirection;
@property (readonly, nonatomic, getter=_heedsHorizontalLayoutMargins) BOOL heedsHorizontalLayoutMargins;
@property (readonly, nonatomic, getter=_iconButtons) NSArray *iconButtons;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
@property (readonly, nonatomic, getter=_utilityView) UIView *utilityView;
@property (readonly, nonatomic, getter=_utilityButton) UIButton *utilityButton;
@property (readonly, nonatomic, getter=_layoutMargins) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (readonly, weak, nonatomic) PLPlatterHeaderContentView *headerContentView;
@property (readonly, nonatomic) double contentBaseline;

+ (double)_headerHeightWithFont:(id)a0 forWidth:(double)a1;
+ (double)_titleLabelBaselineOffsetWithFont:(id)a0;
+ (double)contentBaselineToBoundsBottomWithFont:(id)a0 boundsWidth:(double)a1 scale:(double)a2;

- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_measuringSizeForWidth:(double)a0;
- (double)_titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleLabelBoundsForSize:(struct CGSize { double x0; double x1; })a0 withNumberOfLines:(double)a1;
- (id)initWithPlatterHeaderContentView:(id)a0;
- (void)invalidateCachedSizeInfo;
- (void)layoutDateLabelWithScale:(double)a0;
- (void)layoutIconButtonsWithScale:(double)a0;
- (void)layoutTitleLabelWithTrailingXLimit:(double)a0 scale:(double)a1;
- (void)layoutUtilityButtonWithScale:(double)a0;

@end
