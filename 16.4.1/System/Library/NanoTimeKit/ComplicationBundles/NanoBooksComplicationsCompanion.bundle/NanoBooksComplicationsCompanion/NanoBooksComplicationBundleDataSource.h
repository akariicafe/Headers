@class NBComplicationLibraryItem, NSString, NBComplicationController, NBComplicationTimelineEntry, NSObject;
@protocol OS_dispatch_queue;

@interface NanoBooksComplicationBundleDataSource : CLKCComplicationBundleDataSource <NBComplicationControllerDelegate, NBComplicationLibraryObserver>

@property (retain, nonatomic) NBComplicationController *controller;
@property (retain, nonatomic) NBComplicationTimelineEntry *bookEntry;
@property (retain, nonatomic) NBComplicationLibraryItem *recentAudiobook;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL observingMediaLibrary;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL needsInvalidation;
@property (nonatomic) BOOL wantsRecentBookName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appIdentifier;
+ (id)localizedAppName;
+ (BOOL)acceptsComplicationFamily:(long long)a0 forDevice:(id)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)pause;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)_invalidateIfNeeded;
- (void)controller:(id)a0 didReplaceResponse:(id)a1;
- (id)controller:(id)a0 requestPlayerPathWithRoute:(id)a1;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)a0;
- (void)getLaunchURLForTimelineEntryDate:(id)a0 timeTravelDate:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (BOOL)supportsTapAction;
- (id)_defaultTimelineEntry;
- (void)recentAudiobookDidChange:(id)a0;
- (void)updateMediaLibraryMonitoring;

@end
