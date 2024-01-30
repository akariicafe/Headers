@class NSString, MapsSuggestionsMapsSync, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsMapsSyncSource : MapsSuggestionsBaseSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource> {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
}

@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)awaitQueue;
- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (id)initWithMapsSync:(id)a0 delegate:(id)a1 name:(id)a2;
- (void)start;
- (void).cxx_destruct;
- (void)stop;

@end
