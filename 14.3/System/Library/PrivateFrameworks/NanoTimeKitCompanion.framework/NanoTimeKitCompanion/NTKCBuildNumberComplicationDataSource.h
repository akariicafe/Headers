@class NSString, NRDevice;

@interface NTKCBuildNumberComplicationDataSource : NTKComplicationDataSource {
    NRDevice *nrDevice;
    NSString *companionBuild;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (id)_currentTimelineEntry;

@end
