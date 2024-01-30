@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (void)fire;
- (void)didRemoveLastObserver;

@end
