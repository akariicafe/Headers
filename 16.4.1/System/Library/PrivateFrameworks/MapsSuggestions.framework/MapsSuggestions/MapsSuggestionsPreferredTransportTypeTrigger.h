@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (void).cxx_destruct;

@end
