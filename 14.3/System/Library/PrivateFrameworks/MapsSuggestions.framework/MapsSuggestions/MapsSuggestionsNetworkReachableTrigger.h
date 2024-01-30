@class NSString;

@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsRunCondition>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_reachabilityChanged;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)objectForJSON;
- (BOOL)shouldRun;

@end
