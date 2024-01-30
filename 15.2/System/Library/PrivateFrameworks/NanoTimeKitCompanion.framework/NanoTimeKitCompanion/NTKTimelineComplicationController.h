@class CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController

@property (readonly, nonatomic) CLKComplicationTemplate *alwaysOnTemplate;
@property (nonatomic) BOOL ignoreNewTemplates;
@property (readonly, nonatomic) CLKComplicationTemplate *lockedTemplate;
@property (readonly, nonatomic) CLKComplicationTemplate *activeDisplayTemplate;
@property (nonatomic) BOOL useSampleTemplate;

+ (BOOL)_isLegacy;

- (void).cxx_destruct;
- (unsigned long long)_animationForTimelineEntryTransitionFrom:(id)a0 to:(id)a1 withAnimationBehavior:(unsigned long long)a2;
- (void)_analyticsAppLaunchForTimeTravelDate:(id)a0 timelineEntryDate:(id)a1;

@end
