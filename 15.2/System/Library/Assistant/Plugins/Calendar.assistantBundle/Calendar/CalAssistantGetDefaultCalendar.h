@class EKEventStore;

@interface CalAssistantGetDefaultCalendar : SADomainObjectCommit {
    EKEventStore *_eventStore;
}

- (void)performWithCompletion:(id /* block */)a0;
- (void)setEventStore:(id)a0;
- (id)eventStore;
- (void).cxx_destruct;

@end
