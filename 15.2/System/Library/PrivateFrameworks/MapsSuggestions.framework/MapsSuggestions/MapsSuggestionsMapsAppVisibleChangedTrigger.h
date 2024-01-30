@class NSString, RBSProcessMonitor;

@interface MapsSuggestionsMapsAppVisibleChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition> {
    RBSProcessMonitor *_processMonitor;
    BOOL _isVisible;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTrue;
- (void)didAddFirstObserver;
- (void).cxx_destruct;
- (id)init;
- (id)objectForJSON;
- (void)didRemoveLastObserver;

@end
