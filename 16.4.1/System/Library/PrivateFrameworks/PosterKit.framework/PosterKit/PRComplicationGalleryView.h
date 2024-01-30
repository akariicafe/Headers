@class UICollectionView;
@protocol PRComplicationGalleryViewDelegate;

@interface PRComplicationGalleryView : UIView

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<PRComplicationGalleryViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_makeLayout;

@end
