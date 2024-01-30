@class NSString, BKSApplicationStateMonitor;

@interface MapsSuggestionsMapsAppStateTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsRunCondition> {
    BKSApplicationStateMonitor *_appStateMonitor;
    unsigned int _state;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithState:(unsigned int)a0;
- (void).cxx_destruct;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)objectForJSON;
- (BOOL)shouldRun;

@end
