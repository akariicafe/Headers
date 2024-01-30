@class NSString, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusDateComplicationView : NTKZeusComplicationView <NTKDateComplicationDisplay> {
    UIImageView *_imageView;
    int _currentDayNumber;
}

@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateImage;
- (void)setStyle:(unsigned long long)a0;
- (id)initWithBackgroundView:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)setDateComplicationText:(id)a0 withDayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forDateStyle:(unsigned long long)a2;
- (unsigned long long)desiredDateComplicationDateStyle;

@end
