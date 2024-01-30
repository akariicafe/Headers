@interface SearchUICalendarStore : NSObject

+ (id)calendarColorWithIdentifier:(id)a0;
+ (id)calendarItemFromEventIdentifierComponents:(id)a0;
+ (id)colorFromCalendarItem:(id)a0;
+ (id)eventControllerWithIdentifier:(id)a0;
+ (void)fetchCalendarColorWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchCalendarItemFromEventIdentifierComponents:(id)a0 completionHandler:(id /* block */)a1;
+ (id)sharedCalendarStore;

@end
