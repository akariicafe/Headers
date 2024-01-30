@class PRImageView, PRMonogramView, NSData, PRLikeness;

@interface PRLikenessView : UIView {
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    unsigned long long _likenessType;
    NSData *_recipe;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGImage { } *_staticRepresentation;
}

@property (nonatomic, getter=isCircular) BOOL circular;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldDecode;
@property (retain, nonatomic) PRLikeness *likeness;

+ (void)initialize;

- (id)_imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithLikeness:(id)a0;
- (id)_monogramView;
- (void)_imageForLikeness:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isLikenessEqual:(id)a0;
- (void)_setDisplayedView:(id)a0;
- (BOOL)_shouldRenderStaticRepresentation;
- (void)_updateViewForLikeness:(BOOL)a0;
- (void)setNeedsRedraw;

@end
