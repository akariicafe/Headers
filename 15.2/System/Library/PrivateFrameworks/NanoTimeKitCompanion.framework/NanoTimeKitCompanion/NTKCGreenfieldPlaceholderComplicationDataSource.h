@class NTKGreenfieldPlaceholderComplication, CLKComplicationTimelineEntry;

@interface NTKCGreenfieldPlaceholderComplicationDataSource : NTKComplicationDataSource {
    NTKGreenfieldPlaceholderComplication *_placeholderComplication;
    CLKComplicationTimelineEntry *_cachedTimelineEntry;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)_currentTimelineEntry;

@end
