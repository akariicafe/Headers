@class UIImageView, NSSet;

@interface CKLabel : UILabel

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (nonatomic) BOOL shouldHaveRotatedTitleIconImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textRectForAccessoryImageView;
@property (nonatomic) long long titleIconImageType;
@property (retain, nonatomic) NSSet *titleIconImageTypesSupportingRotation;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)titleIconImageTypeSupportsRotation:(long long)a0;
- (void)_rotateTitleIconImageView;
- (BOOL)hasAccessoryImageView;
- (struct CGSize { double x0; double x1; })sizeOfAccessoryImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectToDrawTextInForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (void)setShouldHaveRotatedTitleIconImage:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isLTR;

@end
