@class VUICollectionViewFeaturedView;

@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell

@property (retain, nonatomic) VUICollectionViewFeaturedView *featuredView;

+ (double)_iOSLockupWidthWithWindowWidth:(double)a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 showsPageControl:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_commonInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
