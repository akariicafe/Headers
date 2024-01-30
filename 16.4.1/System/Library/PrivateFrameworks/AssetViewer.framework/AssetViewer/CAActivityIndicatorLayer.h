@class UIColor;

@interface CAActivityIndicatorLayer : CALayer {
    struct CGColor { } *_color;
    UIColor *_uiColor;
}

@property (readonly, nonatomic, getter=_spokeCount) long long spokeCount;
@property (readonly, nonatomic, getter=_spokeFrameRatio) long long spokeFrameRatio;

- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithColor:(id)a0;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (double)_alphaValueForStep:(long long)a0;
- (double)_spokeLengthForGearWidth:(double)a0;
- (double)_spokeWidthForGearWidth:(double)a0;
- (double)_widthForGearWidth:(double)a0;
- (id)imageForStep:(long long)a0 withColor:(struct CGColor { } *)a1;
- (id)spinnerImages;

@end
