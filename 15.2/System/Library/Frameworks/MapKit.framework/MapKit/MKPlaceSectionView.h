@class NSArray, MKViewWithHairline, MKPlaceSectionItemView;
@protocol MKPlaceSectionViewDelegate;

@interface MKPlaceSectionView : _MKStackView {
    unsigned long long _trackingSelectForRow;
    MKViewWithHairline *_hairLineView;
}

@property (weak, nonatomic) id<MKPlaceSectionViewDelegate> delegate;
@property (retain, nonatomic) MKPlaceSectionItemView *headerView;
@property (copy, nonatomic) NSArray *rowViews;
@property (retain, nonatomic) MKPlaceSectionItemView *footerView;
@property (nonatomic) BOOL highlightsTouches;
@property (nonatomic) BOOL showsBottomHairline;

- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)rowAt:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateHairlineInsets;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_touchesBeganForRow:(id)a0 at:(unsigned long long)a1;
- (void)_touchesCancelledForRow:(id)a0 at:(unsigned long long)a1;
- (void)_tappedRow:(id)a0 at:(unsigned long long)a1;
- (void)setHeaderView:(id)a0 animated:(BOOL)a1;
- (void)_updateViewsAnimated:(BOOL)a0 isNeedLayout:(BOOL)a1;
- (void)setFooterView:(id)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setRowViews:(id)a0 animated:(BOOL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setRowViews:(id)a0 animated:(BOOL)a1 isNeedLayout:(BOOL)a2;
- (void)infoCardThemeChanged;
- (unsigned long long)indexOfRowAt:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateViewsAnimated:(BOOL)a0;

@end
