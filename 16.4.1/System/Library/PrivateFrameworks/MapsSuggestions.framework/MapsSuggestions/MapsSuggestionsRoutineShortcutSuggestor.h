@class NSString, MapsSuggestionsRoutine;

@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {
    MapsSuggestionsRoutine *_routine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
