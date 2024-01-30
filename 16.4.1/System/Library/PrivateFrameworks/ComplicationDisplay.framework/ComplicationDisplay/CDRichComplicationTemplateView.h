@class NSString, CLKComplicationTemplate;
@protocol CDComplicationDisplayObserver;

@interface CDRichComplicationTemplateView : CDRichComplicationView <CDTemplateComplicationDisplay>

@property (readonly, nonatomic) CLKComplicationTemplate *template;
@property (nonatomic) BOOL templateWantsPlatter;
@property (weak, nonatomic) id<CDComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)complicationTemplate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (long long)tritiumUpdateMode;

@end
