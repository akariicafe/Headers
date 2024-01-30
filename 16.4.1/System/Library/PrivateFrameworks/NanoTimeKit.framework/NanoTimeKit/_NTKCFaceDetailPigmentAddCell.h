@class UIButton;
@protocol _NTKCFaceDetailPigmentAddCellDelegate;

@interface _NTKCFaceDetailPigmentAddCell : _NTKCFaceDetailCollectionCell {
    UIButton *_button;
}

@property (weak, nonatomic) id<_NTKCFaceDetailPigmentAddCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)_tapped;

@end
