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

+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (char)suggestionsEntriesAtLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void)start;
- (void).cxx_destruct;
- (id)initWithRoutine:(id)a0 delegate:(id)a1 name:(id)a2;
- (void)dealloc;
- (id).cxx_construct;
- (void)updatedParkedCar;
- (void)stop;

@end
