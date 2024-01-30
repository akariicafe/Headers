@class NSString, NTKMonogramTimelineEntryModel;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {
    NTKMonogramTimelineEntryModel *_currentEntry;
    NSString *_monogramText;
    BOOL _listeningForMonogramNotifications;
}

+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)currentSwitcherTemplate;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (void)startListeningForMonogramNotifications;
- (void)stopListeningForMonogramNotifications;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (id)_currentTimelineEntry;
- (BOOL)supportsTapAction;

@end
