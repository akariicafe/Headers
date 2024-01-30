@class EKSource, NSString, EKEventStore, NSArray, CalDarwinNotificationListener;

@interface EKCalendarVisibilityManager : NSObject <CalActivatable>

@property (class, readonly, nonatomic) NSString *visibilityChangedNotificationName;

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) id /* block */ visibilityChangedCallback;
@property (readonly, nonatomic) CalDarwinNotificationListener *notificationListener;
@property BOOL active;
@property (readonly, nonatomic) NSArray *visibleCalendars;
@property (readonly, nonatomic) NSArray *visibleCalendarsForAllIdentities;
@property (readonly, nonatomic) NSArray *invisibleCalendarsForAllIdentities;
@property (retain, nonatomic) NSArray *invisibleCalendars;
@property (retain, nonatomic) EKSource *limitedToSource;

+ (id)_defaultQueue;

- (id)initWithEventStore:(id)a0 visibilityChangedCallback:(id /* block */)a1 queue:(id)a2;
- (id)initWithEventStore:(id)a0 visibilityChangedCallback:(id /* block */)a1;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2 queue:(id)a3 activate:(BOOL)a4;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2;
- (id)_calendarsThatAreVisible:(BOOL)a0 filteredByIdentity:(BOOL)a1;
- (id)initWithEventStore:(id)a0 limitedToSource:(id)a1 visibilityChangedCallback:(id /* block */)a2 queue:(id)a3;
- (id)_deselectedCalendarIdentifiers;

@end
