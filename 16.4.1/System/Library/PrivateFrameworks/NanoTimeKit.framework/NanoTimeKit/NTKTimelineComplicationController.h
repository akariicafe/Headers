@class NSMapTable, CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController {
    NSMapTable *_displayWrappersToUseSampleTemplate;
}

@property (readonly, nonatomic) CLKComplicationTemplate *alwaysOnTemplate;
@property (nonatomic) BOOL ignoreNewTemplates;
@property (readonly, nonatomic) CLKComplicationTemplate *lockedTemplate;

+ (BOOL)_isLegacy;

- (void).cxx_destruct;
- (void)_analyticsAppLaunchForTimeTravelDate:(id)a0 timelineEntryDate:(id)a1;
- (unsigned long long)_animationForTimelineEntryTransitionFrom:(id)a0 to:(id)a1 withAnimationBehavior:(unsigned long long)a2;
- (id)activeDisplayTemplateForDisplayWrapper:(id)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 face:(id)a2 slot:(id)a3;
- (void)removeDisplayWrapper:(id)a0;
- (void)setUseSampleTemplate:(BOOL)a0 forDisplayWrapper:(id)a1;
- (BOOL)useSampleTemplateForDisplayWrapper:(id)a0;

@end
