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

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)initWithMapsSync:(id)a0 delegate:(id)a1 name:(id)a2;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (BOOL)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)start;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
