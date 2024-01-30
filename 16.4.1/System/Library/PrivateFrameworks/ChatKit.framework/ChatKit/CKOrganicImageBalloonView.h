@class CKOrganicImageLayoutRecipe, CKBalloonImageView;

@interface CKOrganicImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) CKBalloonImageView *imageView;
@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void)prepareForDisplay;
- (void)addFilter:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)image;
- (void).cxx_destruct;
- (void)attachInvisibleInkEffectView;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (BOOL)canUseOpaqueMask;
- (void)configureForMessagePart:(id)a0;
- (id)createOverlayImageView;
- (void)detachInvisibleInkEffectView;
- (id)invisibleInkEffectImage;
- (void)setInvisibleInkEffectImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)suppressMask;
- (id)tailMask;

@end
