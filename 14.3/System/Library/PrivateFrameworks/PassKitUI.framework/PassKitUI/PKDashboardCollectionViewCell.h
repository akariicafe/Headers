@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell {
    UIView *_separatorView;
    BOOL _bottomSeparatorVisible;
    unsigned long long _maskType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousMaskBounds;
    unsigned long long _previousMaskType;
    BOOL _customHorizontalInset;
    double _horizontalInset;
}

@property (nonatomic) BOOL wantsCustomAppearance;
@property (nonatomic) BOOL wantsDefaultHighlightBehavior;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) BOOL showsBottomSeparator;
@property (nonatomic) double horizontalInset;

+ (id)defaultBackgroundColor;
+ (double)defaultHorizontalInset;

- (void).cxx_destruct;
- (void)updateMask;
- (double)_bottomSeparatorAlpha;
- (void)setBottomSeparatorVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
