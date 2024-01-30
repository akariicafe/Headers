@class UIImageView;

@interface PXPeopleRecoCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *faceView;
@property (readonly, nonatomic) UIImageView *checkView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setIsRejected:(BOOL)a0;
- (void)setImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hasImageSet;

@end
