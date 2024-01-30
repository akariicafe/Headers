@class CLKComplicationPreviewTimelineEntry;

@interface NTKUVPreviewComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationPreviewTimelineEntry *_entry;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)getTimelineEndDateWithHandler:(id /* block */)a0;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getTimelineEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;

@end
