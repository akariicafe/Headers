@class NSString, MapsSuggestionsEventKit, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsEventKit *_eventKit;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)eventKitDidChange:(id)a0;
- (BOOL)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void)start;
- (id)initWithDelegate:(id)a0 eventKit:(id)a1 name:(id)a2;
- (void).cxx_destruct;
- (void)stop;

@end
