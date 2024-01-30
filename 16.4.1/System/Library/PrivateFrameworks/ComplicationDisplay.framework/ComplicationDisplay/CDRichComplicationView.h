@class UIColor, NSString, UIFontDescriptor, CLKDevice, NSDate;
@protocol CLKMonochromeFilterProvider, CDComplicationDisplayObserver;

@interface CDRichComplicationView : UIView <CDComplicationDisplay, CLKUITimeTravel, CLKMonochromeComplicationView, CLKMonochromeFilterProvider> {
    BOOL _editing;
    BOOL _highlighted;
    NSDate *_timeTravelDate;
}

@property (readonly, nonatomic) NSDate *complicationDate;
@property (readonly, nonatomic) NSDate *timeTravelDate;
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor;
@property (readonly, nonatomic) double fontSizeFactor;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) long long family;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long fontStyle;
@property (weak, nonatomic) id<CDComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void)setEditing:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)_transitThemeFromTheme:(long long)a0 toTheme:(long long)a1 fraction:(double)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_updateColoringLabel:(id)a0 withFontDescriptor:(id)a1 andSizeFactor:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)interpolatedColorForView:(id)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)transitThemeFromTheme:(long long)a0 toTheme:(long long)a1 fraction:(double)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)a0;
- (id)_fontWithSize:(double)a0 withFontDescriptor:(id)a1;
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;

@end
