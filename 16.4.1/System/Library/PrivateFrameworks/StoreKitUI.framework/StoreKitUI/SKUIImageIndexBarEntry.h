@class UIImage;

@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry

@property (readonly, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)entryImage;

@end
