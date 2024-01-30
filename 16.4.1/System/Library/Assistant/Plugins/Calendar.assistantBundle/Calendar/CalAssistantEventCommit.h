@class EKEventStore;

@interface CalAssistantEventCommit : SADomainObjectCommit {
    EKEventStore *_eventStore;
}

- (id)eventStore;
- (void)performWithCompletion:(id /* block */)a0;
- (void)setEventStore:(id)a0;
- (void).cxx_destruct;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;
- (id)_validateEvent:(id)a0;
- (id)_commitEvent:(id)a0 serviceHelper:(id)a1;

@end
