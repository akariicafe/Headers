@class DCNotesTextureView, NSLayoutConstraint;

@interface DCNotesTextureBackgroundView : UIView

@property (retain, nonatomic) NSLayoutConstraint *textureYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textureHeightConstraint;
@property (readonly, nonatomic) DCNotesTextureView *textureView;
@property BOOL scrollsTexture;

+ (id)textureImage;
+ (id)colorWithPaperTexturePatternImage;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInitWithScrollingTextures:(BOOL)a0 hasAlpha:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollingTextures:(BOOL)a1 hasAlpha:(BOOL)a2;
- (double)heightByCoveringHeight:(double)a0 withImage:(id)a1;

@end
