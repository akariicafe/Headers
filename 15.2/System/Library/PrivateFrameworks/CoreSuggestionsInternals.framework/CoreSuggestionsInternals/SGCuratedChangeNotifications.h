@interface SGCuratedChangeNotifications : NSObject

+ (id)_getListenerByClassMap;
+ (id)_getListener:(Class)a0;
+ (void)_addObserver:(id /* block */)a0 forObjectLifetime:(id)a1 listenerClass:(Class)a2;
+ (void)addAddressBookObserver:(id /* block */)a0 forObjectLifetime:(id)a1;
+ (void)addCalendarObserver:(id /* block */)a0 forObjectLifetime:(id)a1;
+ (void)simulateAddressBookChange;
+ (void)simulateCalendarChange;

@end
