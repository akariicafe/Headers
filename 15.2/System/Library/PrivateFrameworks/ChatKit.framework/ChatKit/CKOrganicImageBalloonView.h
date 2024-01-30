@class CKOrganicImageLayoutRecipe, CKBalloonImageView;

@interface CKOrganicImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) CKBalloonImageView *imageView;
@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void)prepareForDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tailMask;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)createOverlayImageView;
- (id)image;
- (void)setInvisibleInkEffectImage:(id)a0;
- (void)prepareForReuse;
- (id)invisibleInkEffectImage;
- (BOOL)suppressMask;
- (void)setImage:(id)a0;
- (BOOL)canUseOpaqueMask;
- (void)configureForMessagePart:(id)a0;

@end
