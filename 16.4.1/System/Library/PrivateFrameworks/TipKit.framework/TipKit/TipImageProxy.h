@class UIImage;

@interface TipImageProxy : UIImageView {
    void /* unknown type, empty encoding */ shouldDisplay;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) BOOL clipsToBounds;

- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)addSubview:(id)a0;
- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
