@class UIColor, NSString, NTKDigitalTimeLabelStyle;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView> {
    UIColor *_shadowColor;
}

@property (copy, nonatomic) NTKDigitalTimeLabelStyle *style;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) BOOL frozen;

- (void)layoutSubviews;
- (void)setShadowColor:(id)a0;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (void)setTimeOffset:(double)a0;
- (void)setTextColor:(id)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setFrameUsingCurrentStyle;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1;
- (id)_newUnderlyingLabel:(BOOL)a0;
- (void)applyFaceFromColor:(unsigned long long)a0 toColor:(unsigned long long)a1 fraction:(float)a2 device:(id)a3;
- (void)applyFaceFromColorPalette:(id)a0 toColorPalette:(id)a1 fraction:(float)a2 device:(id)a3;
- (id)_labelColorFromFaceColorPalette:(id)a0 device:(id)a1;
- (void)animateToStyle:(id)a0 duration:(double)a1 timingFunction:(id)a2 additionalAnimation:(id /* block */)a3 completion:(id /* block */)a4;
- (void)applyFaceColor:(unsigned long long)a0 device:(id)a1;
- (void)applyFaceColorPalette:(id)a0 device:(id)a1;

@end
