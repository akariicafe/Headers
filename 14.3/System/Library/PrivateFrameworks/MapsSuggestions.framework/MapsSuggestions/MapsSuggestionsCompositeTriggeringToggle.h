@class NSString, NSMutableArray;

@interface MapsSuggestionsCompositeTriggeringToggle : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    NSMutableArray *_runConditions;
    NSMutableArray *_triggers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerFired:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 behavior:(unsigned long long)a1;
- (void)addRunCondition:(id)a0;
- (void)didAddFirstObserver;
- (void)addTrigger:(id)a0;
- (id)objectForJSON;
- (BOOL)shouldRun;

@end
