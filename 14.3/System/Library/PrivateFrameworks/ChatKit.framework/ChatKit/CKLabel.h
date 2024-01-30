@class UIImageView, NSSet;

@interface CKLabel : UILabel

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (nonatomic) BOOL shouldHaveRotatedTitleIconImage;
@property (nonatomic) long long titleIconImageType;
@property (retain, nonatomic) NSSet *titleIconImageTypesSupportingRotation;

- (BOOL)isLTR;
- (void).cxx_destruct;
- (BOOL)titleIconImageTypeSupportsRotation:(long long)a0;
- (void)_rotateTitleIconImageView;
- (struct CGSize { double x0; double x1; })sizeOfTitleLabel;
- (struct CGSize { double x0; double x1; })sizeOfAccessoryImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectToDrawTextInForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setShouldHaveRotatedTitleIconImage:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
