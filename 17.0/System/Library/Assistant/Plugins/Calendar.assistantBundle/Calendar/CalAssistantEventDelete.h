@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {
    EKEventStore *_eventStore;
}

- (id)eventStore;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setEventStore:(id)a0;
- (id)_validateEvent:(id)a0;
- (id)_deleteEvent:(id)a0;

@end
