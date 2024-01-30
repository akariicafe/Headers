@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence> {
    void /* unknown type, empty encoding */ queue;
}

- (id)first;
- (void).cxx_destruct;
- (id)init;
- (id)last;
- (id)eventsBetween:(id)a0 and:(id)a1;
- (id)eventsWithIdentifier:(id)a0;
- (void)loadFromKnowledgeStreamNamed:(id)a0 between:(id)a1 and:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)appendEvent:(id)a0;
- (void)writeEventsToKnowledgeStreamNamed:(id)a0 completionHandler:(id /* block */)a1;

@end
