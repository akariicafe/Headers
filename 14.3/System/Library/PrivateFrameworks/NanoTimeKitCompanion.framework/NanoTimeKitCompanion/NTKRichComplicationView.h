@class UIColor, NSString, NSDate, CLKDevice, CLKComplicationTemplate;
@protocol NTKComplicationDisplayObserver, CLKMonochromeFilterProvider;

@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider> {
    BOOL _editing;
    BOOL _highlighted;
    NSDate *_timeTravelDate;
}

@property (readonly, nonatomic) CLKComplicationTemplate *template;
@property (readonly, nonatomic) NSDate *complicationDate;
@property (readonly, nonatomic) NSDate *timeTravelDate;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) long long family;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) BOOL templateWantsPlatter;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setEditing:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)interpolatedColorForView:(id)a0;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)a0;
- (id)complicationTemplate;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_applyPausedUpdate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (long long)tritiumUpdateMode;
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_transitThemeFromTheme:(long long)a0 toTheme:(long long)a1 fraction:(double)a2;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (void)setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)transitThemeFromTheme:(long long)a0 toTheme:(long long)a1 fraction:(double)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;

@end
