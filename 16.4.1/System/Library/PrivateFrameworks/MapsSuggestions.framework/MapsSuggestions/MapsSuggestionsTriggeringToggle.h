@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsCondition> {
    unsigned long long _behavior;
    BOOL _state;
    unsigned long long _timesUpdated;
}

@property (nonatomic) BOOL state;
@property (readonly, nonatomic) unsigned long long timesUpdated;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (id)objectForJSON;
- (BOOL)isTrue;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 startState:(BOOL)a1;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2;

@end
