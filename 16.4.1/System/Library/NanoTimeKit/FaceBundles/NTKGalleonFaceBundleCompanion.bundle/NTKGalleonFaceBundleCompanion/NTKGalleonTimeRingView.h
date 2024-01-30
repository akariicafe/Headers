@class UIImageView;
@protocol NTKGalleonColorPalette;

@interface NTKGalleonTimeRingView : UIView {
    UIImageView *_ringImageView;
    UIImageView *_minorTicksImageView;
    UIImageView *_majorTicksImageView;
}

@property (retain, nonatomic) id<NTKGalleonColorPalette> palette;

+ (id)_imageWithRenderer:(id)a0 diameter:(double)a1 tickCount:(unsigned long long)a2 tickSize:(struct CGSize { double x0; double x1; })a3;

- (void).cxx_destruct;
- (id)initWithDiameter:(double)a0;
- (double)ringThickness;

@end
