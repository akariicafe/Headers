@class NSString, NSObject, MapsSuggestionsRoutine;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsParkedCarObserver, MapsSuggestionsSource, MapsSuggestionsPreloadableSource> {
    MapsSuggestionsRoutine *_routine;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (char)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updatedParkedCar;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (void)dealloc;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (id)initWithRoutine:(id)a0 delegate:(id)a1 name:(id)a2;
- (id).cxx_construct;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)start;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;

@end
