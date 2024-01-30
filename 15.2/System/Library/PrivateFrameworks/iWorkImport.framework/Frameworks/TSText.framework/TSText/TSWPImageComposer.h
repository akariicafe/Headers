@class TSUImage;

@interface TSWPImageComposer : NSObject

@property (retain, nonatomic) TSUImage *compositedImage;
@property (retain, nonatomic) TSUImage *baseImage;
@property (nonatomic) double screenScale;

- (void).cxx_destruct;
- (id)initWithBaseImage:(id)a0 screenScale:(double)a1;
- (id)overlayImage:(id)a0 usingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
