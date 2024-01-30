@class NSString, NTKZeudleComplicationBackgroundView, CLKDevice;
@protocol NTKComplicationDisplayObserver, NTKZeudleColorPalette;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeudleComplicationDisplay>

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NTKZeudleComplicationBackgroundView *backgroundView;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) id<NTKZeudleColorPalette> palette;
@property (nonatomic) BOOL legibilityEnabled;

+ (id)viewForComplicationType:(unsigned long long)a0;
+ (id)viewForComplicationType:(unsigned long long)a0 backgroundView:(id)a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)_updateLegibility;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBackgroundView:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
