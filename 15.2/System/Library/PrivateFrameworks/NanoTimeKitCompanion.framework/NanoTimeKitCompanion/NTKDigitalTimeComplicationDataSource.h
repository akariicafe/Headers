@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)complicationApplicationIdentifier;
- (BOOL)supportsTapAction;
- (id)_templateWithShouldDisplayIdealizeState:(BOOL)a0;
- (unsigned long long)timelineAnimationBehavior;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;

@end
