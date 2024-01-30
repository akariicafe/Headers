@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didAddFirstObserver;
- (id)initWithName:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0;
- (void)fire;
- (void)didRemoveLastObserver;

@end
