@class NBComplicationLibraryItem, NSHashTable, NBComplicationTimelineEntry, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface NBComplicationSharedDataSource : NSObject

@property (retain, nonatomic) NBComplicationLibraryItem *recentAudiobook;
@property (retain, nonatomic) NBComplicationTimelineEntry *current;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSNumber *activeOriginIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL observingMediaLibrary;
@property (nonatomic) double lastElapsedTime;
@property (nonatomic) double lastCurrentTime;
@property (nonatomic) float lastPlaybackRate;

+ (id)sharedDataSource;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)resume:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)q_timelineEntryForOrigin:(id)a0;
- (id)_timelineEntryForOrigin:(id)a0 nowPlayingController:(id)a1 recentAudiobook:(id)a2;
- (id)defaultSwitcherTemplate;
- (void)q_endModifyingTimeline;
- (id)defaultSampleTemplate;
- (void)getCurrentTimelineEntryForFamily:(long long)a0 wantsRecentBookName:(BOOL)a1 handler:(id /* block */)a2;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 wantsRecentBookName:(BOOL)a1 handler:(id /* block */)a2;
- (id)_showAssetURL:(id)a0;
- (id)q_nowPlayingURL;
- (void)q_updateWithOrigin:(id)a0;
- (void)q_updateMediaLibraryMonitoring;

@end
