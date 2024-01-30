@class NSString, MapsSuggestionsBudget, MapsSuggestionsMapsSync, NSObject, MapsSuggestionsRoutine;
@protocol OS_dispatch_queue, MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsRatingRequestSource : MapsSuggestionsBaseSource <MapsSuggestionsBudgetDelegate, MapsSuggestionsSource> {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsBudget *_budget;
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
- (char)removeEntry:(id)a0 behavior:(long long)a1 handler:(id /* block */)a2;
- (id)readBudgetState;
- (void)start;
- (void).cxx_destruct;
- (void)writeBudgetState:(id)a0;
- (id)initWithMapsSync:(id)a0 routine:(id)a1 delegate:(id)a2 name:(id)a3;
- (void)stop;

@end
