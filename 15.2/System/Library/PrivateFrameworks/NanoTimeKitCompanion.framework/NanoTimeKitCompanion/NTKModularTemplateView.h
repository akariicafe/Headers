@class NSDate, NSString, CLKComplicationTemplate;
@protocol NTKComplicationDisplayObserver;

@interface NTKModularTemplateView : NTKComplicationModuleView <NTKTemplateComplicationDisplay>

@property (retain, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) unsigned long long highlightMode;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (void)_update;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (void)applyFaceColor:(unsigned long long)a0 units:(unsigned long long)a1;
- (void)applyTransitionFraction:(double)a0 fromFaceColor:(unsigned long long)a1 toFaceColor:(unsigned long long)a2 units:(unsigned long long)a3 brightenedUnits:(unsigned long long)a4;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)setContainsOverrideFaceColor:(id)a0;
- (void)applyFaceColorPalette:(id)a0 units:(unsigned long long)a1;
- (void)applyTransitionFraction:(double)a0 fromFaceColorPalette:(id)a1 toFaceColorPalette:(id)a2 units:(unsigned long long)a3 brightenedUnits:(unsigned long long)a4;
- (void)_propagateColorSchemeToSubviews:(id)a0;
- (void)_setColorScheme:(id)a0 propagateToSubviews:(BOOL)a1;
- (BOOL)_useInvertedHighlightForColorScheme:(id)a0;
- (void)_enumerateColoringViewsSubviewsWithBlock:(id /* block */)a0 invertedHighlight:(BOOL)a1;

@end
