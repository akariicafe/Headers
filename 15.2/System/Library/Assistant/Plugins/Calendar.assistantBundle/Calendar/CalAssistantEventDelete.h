@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {
    EKEventStore *_eventStore;
}

- (void)performWithCompletion:(id /* block */)a0;
- (void)setEventStore:(id)a0;
- (id)eventStore;
- (void).cxx_destruct;
- (id)_validateEvent:(id)a0;
- (id)_deleteEvent:(id)a0;

@end
