@class NSString;

@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTrue;
- (void)didAddFirstObserver;
- (id)init;
- (id)objectForJSON;
- (void)didRemoveLastObserver;
- (void)_reachabilityChanged;

@end
