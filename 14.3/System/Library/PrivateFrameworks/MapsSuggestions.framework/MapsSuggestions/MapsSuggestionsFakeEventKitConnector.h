@class NSString, NSArray, NSPredicate, NSDictionary, NSError;
@protocol MapsSuggestionsEventKitConnectorDelegate;

@interface MapsSuggestionsFakeEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {
    NSArray *_configuredVisibleCalendars;
    NSArray *_configuredCalendars;
    NSPredicate *_configuredPredicate;
    NSDictionary *_configuredEventsPerPredicate;
    NSDictionary *_configuredEventsPerIdentifier;
    NSError *_configuredError;
    BOOL _isListening;
    unsigned long long _calledRemoveEvent;
}

@property (weak, nonatomic) id<MapsSuggestionsEventKitConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListeningForChanges;
- (BOOL)removeEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)stopListeningForChanges;
- (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
- (id)eventWithIdentifier:(id)a0;
- (id)visibleCalendars;
- (id)eventsMatchingPredicate:(id)a0;
- (id)calendarsForEntityType:(unsigned long long)a0;
- (void)configureVisibleCalendars:(id)a0;
- (void)fireChange;
- (void)configureEventCalendars:(id)a0;
- (void)configurePredicate:(id)a0;
- (void)configureEventsPerPredicate:(id)a0;
- (void)configureEventPerIdentifier:(id)a0;
- (void)configureError:(id)a0;
- (unsigned long long)calledRemoveEvent;

@end
