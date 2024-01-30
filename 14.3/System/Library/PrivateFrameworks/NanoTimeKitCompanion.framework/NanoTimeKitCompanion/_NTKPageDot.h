@class UIImage;

@interface _NTKPageDot : UIImageView <NTKPageDot> {
    double _diameter;
    UIImage *_currentPageImage;
    UIImage *_otherPageImage;
}

@property (nonatomic) BOOL representsCurrentPage;

- (void).cxx_destruct;
- (void)_updateImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDiameter:(double)a0 currentPageColor:(id)a1 otherPageColor:(id)a2 forDevice:(id)a3;

@end
