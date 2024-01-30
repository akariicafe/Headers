@interface SGCuratedChangeNotifications : NSObject

+ (void)_addObserver:(id /* block */)a0 forObjectLifetime:(id)a1 listenerClass:(Class)a2;
+ (id)_getListener:(Class)a0;
+ (id)_getListenerByClassMap;
+ (void)addAddressBookObserver:(id /* block */)a0 forObjectLifetime:(id)a1;
+ (void)addCalendarObserver:(id /* block */)a0 forObjectLifetime:(id)a1;
+ (void)simulateAddressBookChange;
+ (void)simulateCalendarChange;

@end
