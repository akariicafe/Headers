@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (id)_templateWithShouldDisplayIdealizeState:(BOOL)a0;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
