@class NSString, UIView;

@interface SBElasticSliderView : CCUIContinuousSliderView <SBElasticGlyphView> {
    UIView *_backgroundView;
}

@property (nonatomic) double additiveGlyphScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAxis:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (void).cxx_destruct;

@end
