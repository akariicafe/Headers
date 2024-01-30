@class NSString, EKEventStore;

@interface CalAssistantEventSearch : SACalendarEventSearch <CalAssistantCommand> {
    EKEventStore *_eventStore;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
