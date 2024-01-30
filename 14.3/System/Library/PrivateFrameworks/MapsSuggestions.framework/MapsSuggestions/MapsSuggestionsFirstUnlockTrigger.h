@class NSString;
@protocol MapsSuggestionsFirstUnlockProtocol;

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver, MapsSuggestionsRunCondition> {
    id<MapsSuggestionsFirstUnlockProtocol> _firstUnlock;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerFired:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFirstLock:(id)a0;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)objectForJSON;
- (BOOL)shouldRun;

@end
