@interface SearchUICalendarStore : NSObject

+ (id)sharedCalendarStore;
+ (id)calendarItemFromEventIdentifierComponents:(id)a0;
+ (id)calendarColorWithIdentifier:(id)a0;
+ (id)eventControllerWithIdentifier:(id)a0;
+ (void)fetchCalendarColorWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
