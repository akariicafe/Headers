@class NTKGreenfieldPlaceholderComplication, CLKComplicationTimelineEntry;

@interface NTKCGreenfieldPlaceholderComplicationDataSource : NTKComplicationDataSource {
    NTKGreenfieldPlaceholderComplication *_placeholderComplication;
    CLKComplicationTimelineEntry *_cachedTimelineEntry;
}

+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (id)_currentTimelineEntry;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;

@end
