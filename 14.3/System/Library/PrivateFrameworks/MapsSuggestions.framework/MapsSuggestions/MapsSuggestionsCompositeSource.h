@class NSString, NSMutableDictionary, NSMutableSet, NSObject, MapsSuggestionsSuppressor;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate, OS_dispatch_source;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {
    NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
}

@property BOOL running;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)disposition;
+ (BOOL)isEnabled;

- (void)feedbackForEntry:(id)a0 action:(long long)a1;
- (void)feedbackForContact:(id)a0 action:(long long)a1;
- (void).cxx_destruct;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (BOOL)addChildSource:(id)a0;
- (void)dealloc;
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (void)stop;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (BOOL)removeChildSource:(id)a0;
- (void)test_resetSuppressions;
- (BOOL)detachSource:(id)a0;
- (id)children;
- (BOOL)attachSource:(id)a0;
- (double)updateSuggestionEntriesOfType:(long long)a0 handler:(id /* block */)a1;
- (id).cxx_construct;
- (double)updateSuggestionEntriesWithHandler:(id /* block */)a0;
- (void)feedbackForMapItem:(id)a0 action:(long long)a1;
- (void)start;
- (double)test_suppressionDurationForBehavior:(long long)a0 type:(long long)a1;
- (id)initFromResourceDepot:(id)a0 name:(id)a1;
- (void)test_sync;
- (id)test_dateUntilSuppressedEntry:(id)a0;

@end
