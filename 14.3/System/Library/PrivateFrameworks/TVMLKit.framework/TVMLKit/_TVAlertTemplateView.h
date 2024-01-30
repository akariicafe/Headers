@class NSArray, UICollectionView, UIImage, UIImageView;

@interface _TVAlertTemplateView : UIView {
    UIImage *_bgImage;
    UIImageView *_bgImageView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSArray *viewsAbove;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *viewsBelow;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBgImage:(id)a0;

@end
