@class NSString, NSArray, NSDate, NSObject, MapsSuggestionsRoutine;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSDate *_fetchEntriesFromDate;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsRoutine *_routine;
    NSArray *_routineLocations;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)preLoad;
- (id)initWithRoutine:(id)a0;
- (char)relevanceScoreForNames:(id)a0 addresses:(id)a1 mapItems:(id)a2 completion:(id /* block */)a3;

@end
