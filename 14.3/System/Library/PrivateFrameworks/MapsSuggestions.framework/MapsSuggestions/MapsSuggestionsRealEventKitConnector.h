@class NSString, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsEventKitConnectorDelegate;

@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<MapsSuggestionsEventKitConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListeningForChanges;
- (id)init;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)stopListeningForChanges;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (id)eventWithIdentifier:(id)a0;
- (void)_eventStoreDidChange:(id)a0;
- (id)visibleCalendars;
- (id)eventsMatchingPredicate:(id)a0;
- (id)calendarsForEntityType:(unsigned long long)a0;

@end
