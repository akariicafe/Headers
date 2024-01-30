@class NSString, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusMoonPhaseComplicationView : NTKZeusComplicationView <NTKMoonPhaseComplicationDisplay> {
    UIImageView *_imageView;
    long long _moonPhaseHemisphere;
    unsigned long long _phaseNumber;
}

@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateImages;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBackgroundView:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)setPhaseNumber:(unsigned long long)a0 hemisphere:(long long)a1;

@end
