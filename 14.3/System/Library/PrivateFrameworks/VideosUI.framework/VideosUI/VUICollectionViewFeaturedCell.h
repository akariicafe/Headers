@class VUICollectionViewFeaturedView, TVImageLayout, IKViewElement;

@interface VUICollectionViewFeaturedCell : UICollectionViewCell

@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUICollectionViewFeaturedView *featuredView;

+ (struct CGSize { double x0; double x1; })lockupSizeForElement:(id)a0;
+ (id)featuredCellWithElement:(id)a0 existingCell:(id)a1;
+ (double)_iOSLockupWidthWithWindowWidth:(double)a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 showsPageControl:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
