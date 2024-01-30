@class PHPerson;

@interface PXRoundImageView : UIImageView

@property (nonatomic) int currentRequestID;
@property (nonatomic) struct CGSize { double width; double height; } currentRequestSize;
@property (retain, nonatomic) PHPerson *representedPerson;

- (void)_updateImageIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)displayScale;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateCorner;
- (void)_updateImageForFaceCropRequestID:(int)a0 image:(id)a1 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id)a3;

@end
