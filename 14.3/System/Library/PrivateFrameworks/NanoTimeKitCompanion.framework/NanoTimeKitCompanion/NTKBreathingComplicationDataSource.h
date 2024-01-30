@interface NTKBreathingComplicationDataSource : NTKComplicationDataSource

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)complicationApplicationIdentifier;
- (id)lockedTemplate;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;

@end
