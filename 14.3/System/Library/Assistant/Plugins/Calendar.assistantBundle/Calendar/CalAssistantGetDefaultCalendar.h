@class EKEventStore;

@interface CalAssistantGetDefaultCalendar : SADomainObjectCommit {
    EKEventStore *_eventStore;
}

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setEventStore:(id)a0;
- (id)eventStore;

@end
